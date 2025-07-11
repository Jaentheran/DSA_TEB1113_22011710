#include <iostream>
using namespace std;

class Node {
public:
    string name;
    Node* next;

    Node(string name) {
        this->name = name;
        this->next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void insert_node(string name) {
        Node* new_node = new Node(name);

        if (head == nullptr) {
            head = new_node;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = new_node;
        }
    }

    void delete_node(string value) {
        if (head == nullptr) return;

        if (head->name == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        while (current->next != nullptr && current->next->name != value) {
            current = current->next;
        }

        if (current->next != nullptr) {
            Node* temp = current->next;
            current->next = temp->next;
            delete temp;
        }
    }

    void display_list() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->name << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() {
    LinkedList std_names;

    std_names.insert_node("Ali");
    std_names.insert_node("Alice");
    std_names.insert_node("Ahmed");

    cout << "Original list:\n";
    std_names.display_list();

    std_names.delete_node("Alice");

    cout << "After deleting 'Alice':\n";
    std_names.display_list();

    return 0;
}