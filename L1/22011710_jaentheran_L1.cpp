/*
ID = 22011710
Name = Jaentheran Saravanan
*/


#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    string contact;
    string email;
};

int main() {

  Student students [5];


    for (int i = 0; i < 5; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;

        cout << "Student ID: ";
        cin >> students[i].id;
        cin.ignore(); 

        cout << "Student Name: ";
        getline(cin, students[i].name);

        cout << "Student Contact: ";
        getline(cin, students[i].contact);

        cout << "Student Email: ";
        getline(cin, students[i].email);

        cout << endl;
    }


    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ":\n";
        cout << "ID: " << students[i].id << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Contact: " << students[i].contact << endl;
        cout << "Email: " << students[i].email << endl;
    }

return 0;
}