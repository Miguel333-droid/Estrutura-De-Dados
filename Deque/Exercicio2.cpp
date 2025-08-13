#include <iostream>

using namespace std;

template <typename T>
class Deque {
private:
    struct Node {
    T value;
    Node* prev;
    Node* next;
        Node(const T& val) : value(val), prev(nullptr), next(nullptr) {}
    };

    Node* front;
    Node* back;

public:
    Deque() : front(nullptr), back(nullptr) {}

    ~Deque() {
        clear();
    }

    bool isEmpty() const {
        return front == nullptr;
    }

    void pushFront(const T& value) {
        Node* newNode = new Node(value);
        if (isEmpty()) {
            front = back = newNode;
        } else {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
    }

    void pushBack(const T& value) {
        Node* newNode = new Node(value);
        if (isEmpty()) {
            front = back = newNode;
        } else {
            newNode->prev = back;
            back->next = newNode;
            back = newNode;
        }
    }

    void popFront() {
        if (isEmpty()) {
            std::cout << "O deque est� vazio." << std::endl;
            return;
        }

        Node* temp = front;
        front = front->next;

        if (front == nullptr) {
            back = nullptr;
        } else {
            front->prev = nullptr;
        }

        delete temp;
    }

    void popBack() {
        if (isEmpty()) {
            std::cout << "O deque est� vazio." << std::endl;
            return;
        }

        Node* temp = back;
        back = back->prev;

        if (back == nullptr) {
            front = nullptr;
        } else {
            back->next = nullptr;
        }

        delete temp;
    }

    const T& getFront() const {
        if (isEmpty()) {
            throw std::runtime_error("O deque est� vazio.");
        }
        return front->value;
    }

    const T& getBack() const {
        if (isEmpty()) {
            throw std::runtime_error("O deque est� vazio.");
        }
        return back->value;
    }

    void clear() {
        Node* current = front;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        front = back = nullptr;
    }

    void print() const {
        if (isEmpty()) {
            std::cout << "O deque est� vazio." << std::endl;
            return;
        }

        Node* current = front;
        while (current != nullptr) {
            std::cout << current->value << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
    
    T& at(int index) {
    if (index < 0) {
        throw std::out_of_range("�ndice negativo");
    }
    Node* current = front;
    int i = 0;
    while (current != nullptr && i < index) {
        current = current->next;
        i++;
    }
    if (current == nullptr) {
        throw std::out_of_range("�ndice fora do intervalo");
    }
    return current->value;
}

};

int main() {
	int a = 0;


Deque<int> deque;
	deque.pushFront(3);
	deque.pushFront(2);
	deque.pushFront(1);
	
	std:: cout << "Deque: ";
	deque.print();
	
	cout << "Agora vamos muda-lo." << endl;
	cout << "Digite os novos n�meros: ";
	
	for (int i = 0; i < 3; i++){
		cin >> a;
		
		deque.at(i) = a;
	}
	
	deque.print();
	
	
}
