#include <iostream>
using namespace std;

class Node {
public:
    string name;
    Node* next;
    Node* prev;

    Node(string name) {
        this->name = name;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class LinkedList {
private:
    Node* head;
    Node* tail;

public:
    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void insert_node(string name) {
        Node* new_node = new Node(name);

        if (head == nullptr) {
            head = new_node;
            tail = new_node;
        } else {
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
        }
    }

    void delete_node(string value) {
        if (head == nullptr) return;

        if (head->name == value) {
            Node* temp = head;
            head = head->next;
            if (head != nullptr)
                head->prev = nullptr;
            else
                tail = nullptr; 
            delete temp;
            return;
        }

        Node* current = head->next;

        while (current != nullptr && current->name != value) {
            current = current->next;
        }

        if (current != nullptr) {
            if (current->next != nullptr)
                current->next->prev = current->prev;
            else
                tail = current->prev;

            current->prev->next = current->next;
            delete current;
        }
    }

    void display_list() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->name << " <-> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }

    void display_reverse() {
        Node* current = tail;
        while (current != nullptr) {
            cout << current->name << " <-> ";
            current = current->prev;
        }
        cout << "nullptr" << endl;
    }
};

int main() {
    LinkedList std_names;

    std_names.insert_node("Ali");
    std_names.insert_node("Alice");
    std_names.insert_node("Ahmed");

    cout << "Forward list:\n";
    std_names.display_list();

    cout << "Reverse list:\n";
    std_names.display_reverse();

    std_names.delete_node("Alice");

    cout << "\nAfter deleting 'Alice':\n";
    std_names.display_list();

    return 0;
}
