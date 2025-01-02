#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    ifstream arq("palavras.txt", fstream::in);

    if (!arq.is_open()){
        cout << "ERROR: Unable to open the file" << endl;
        return 1;
    } else {
        cout << "SUCCESS: The file was open" << endl;
    };

    int choice;
    string str_words_count;
    string temp;
    getline(arq, str_words_count);

    int int_words_count = stoi(str_words_count);
    // cout << int_words_count << endl;

    cout << "Choose a number between 1 and " << int_words_count << endl;
    cin >> choice;
    choice -= 1;

    if (choice >= int_words_count || choice < 0){
        cout << "ERROR: Choose a number between 1 and " << int_words_count << endl;
        return 1;
    };

    string all_words[int_words_count];

    for(int i=0; i<int_words_count; i++){
        getline(arq, all_words[i]);
    };

    string chosen_word = all_words[choice];
    // cout  << chosen_word << endl; // SHOW THE ANSWER

    int attempts = 5;
    string word_attempt;
    string display = "*****";
    string letters_not_found = "";

    cin.ignore();
    while (getline(cin, word_attempt)) {

        if (word_attempt.length() != 5) {
            cout << "TRY AGAIN: The word must have 5 letters" << endl;
            continue;
        };

        for (int i=0; i<5; i++) {
            word_attempt[i] = toupper(word_attempt[i]);
        };

        if (word_attempt==chosen_word) {
            cout << "YOU WIN!" << endl;
            return 0;
        };

        for (int i=0; i<5; i++) {
            if (word_attempt[i] == chosen_word[i]) {
                display[i] = word_attempt[i];
            } else if (chosen_word.find(word_attempt[i]) != string::npos){
                display[i] = tolower(word_attempt[i]);
            } else {
                if (letters_not_found.find(word_attempt[i]) > 25) {
                    letters_not_found += word_attempt[i];
                };
            };
        };

        cout << display << " | " << letters_not_found << endl;
        display = "*****";

        attempts -= 1;
        if (attempts == 0) {
            cout << "YOU LOST! " << chosen_word << endl;
            return 0;
        };
        cout << "You have " << attempts << " more attempts" << endl;
    };

    return 0;
}