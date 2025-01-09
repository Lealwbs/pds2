#include <iostream>
#include <list>
#include <string>

using namespace std;

class Object {
private:
    int id;
    static int id_counter;
    static int object_counter;

public:
    explicit Object(int id_to_create = 0) {
        if (id_to_create < 0) {
            this->id = id_to_create;
        } else {
            this->id = id_counter;
            id_counter++;
        };
        object_counter++;
    };

    ~Object() {
        object_counter--;
    };

    int return_id() {
        return this->id;
    };

    static int return_object_counter() {
        return object_counter;
    };

    Object *return_memory_addr() {
        return this;
    };
};

int Object::id_counter = 1;
int Object::object_counter = 0;

int main() {
    cout << "Hello World" << endl;

    list<Object *> objects_list;

    string input;
    int num_aux;
    Object* ptr_aux = nullptr;

    while (true) {
        cin >> input; //(A, C, R, N, P, L, E)

        if (input == "A") {

            objects_list.push_back(new Object{});
            cout << "ID: " << (objects_list.back())->return_id() << " | ADDR: " << (objects_list.back())->
                    return_memory_addr() << endl;

        } else if (input == "C") {

            cin >> num_aux; // given id for the object
            if (num_aux < 0) {
                objects_list.push_front(new Object{num_aux});
                cout << "ID: " << (objects_list.front())->return_id() << " | ADDR: " << (objects_list.front())->return_memory_addr() << endl;
            } else {
                cout << "ERROR: The number must be negative" << endl;
            };

        } else if (input == "R") {

            if (objects_list.empty()) {
                cout << "ERROR: The list is empty" << endl;
            } else {
                ptr_aux = objects_list.front();
                cout << "ID: " << ptr_aux->return_id() << " | ADDR: " << ptr_aux->return_memory_addr() << " deleted" << endl;
                objects_list.pop_front();
                delete ptr_aux;
            };

        } else if (input == "N") {

            cout << "There are " << Object::return_object_counter() << " objects and " << objects_list.size() << " elements in the list" << endl;

        } else if (input == "P") {

            cin >> num_aux;
            if (num_aux<1 || num_aux>objects_list.size()) {
                cout << "ERROR: Type a valid index of the list" << endl;
            } else {
                auto it = objects_list.begin();   // Type of "it" = list<Object*>::iterator
                advance(it, num_aux-1);      // Iterator goes from 1 to (1+(num_aux-1))º position = num_auxº position
                cout << "ID: " << (*it)->return_id() << " | ADDR: " << (*it)->return_memory_addr() << endl;
            }

        } else if (input == "L") {

            for (Object* &obj : objects_list) {
                cout << "ID: " << obj->return_id() << " | ADDR: " << obj->return_memory_addr() << endl;
            };

        } else if (input == "E") {

            cout << "Exit" << endl;
            return 0;

        } else {
            cout << "ERROR: Please type one of the letters: (A, C, R, N, P, L, E)" << endl;
        };
    };
};
