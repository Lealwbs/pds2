#include <iostream>
#include <string>
#include <fstream>
#include <map>

using namespace std;

int main() {
    const string TEXT_DIR = "text_files/";

    // Files available:
    cout << "CHOOSE A FILE BELOW TO BE READ:" << endl;
    cout << "> blackbird.txt" << endl;
    cout << "> quadrilha.txt" << endl;
    cout << "> teste.txt" << endl;

    string filename;
    cin >> filename;

    ifstream arq(TEXT_DIR + filename, fstream::in);

    if (!arq.is_open()) {
        cout << "ERROR: Unable to open the file or file does not exist" << endl;
        return 1;
    } else {
        cout << "SUCCESS: The file was open successfully" << endl;
    };

    map<string, int> words_count;
    string aux_str;

    // while (getline(arq, aux_str)) {
    //     cout << aux_str << endl;
    // };

    while (arq >> aux_str) {
        // convert aux_str to all lowercase
        string temp_str = "";
        for (char &c: aux_str) {
            if (isalnum(c)) {
                temp_str += tolower(c);
            };
        };
        aux_str = temp_str;

        if (words_count[aux_str] == 0) {
            // if dont exist yet
            words_count[aux_str] = 1;
        } else {
            // if already exists
            words_count[aux_str] += 1;
        };
    };

    arq.close();

    cout << "START OF COUNT" << endl;

    for (const auto &word: words_count) {
        cout << word.first << " " << word.second << endl;
    };

    cout << "END OF COUNT" << endl;

    return 0;
};
