#include <iostream>
#include <stdexcept>

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
            cout << "O deque está vazio." << endl;
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
            cout << "O deque está vazio." << endl;
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
            throw runtime_error("O deque está vazio.");
        }
        return front->value;
    }

    const T& getBack() const {
        if (isEmpty()) {
            throw runtime_error("O deque está vazio.");
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
            cout << "O deque está vazio." << endl;
            return;
        }

        Node* current = front;
        while (current != nullptr) {
            cout << current->value << " ";
            current = current->next;
        }
        cout << endl;
    }
};

// Função que modifica o deque conforme o pedido
void atualizarDeque(Deque<int>& deque, int valor) {
    deque.popFront();
    deque.pushBack(valor);
}

int main() {
    Deque<int> deque;
    int q, a, novoValor;

    cout << "Digite a quantidade de números no deque: ";
    cin >> q;

    cout << "Digite os números do deque: ";
    for (int i = 0; i < q; i++) {
        cin >> a;
        deque.pushBack(a);
    }

    cout << "Deque antes da atualização: ";
    deque.print();

    cout << "Digite o valor a ser adicionado ao final do deque: ";
    cin >> novoValor;

    atualizarDeque(deque, novoValor);

    cout << "Deque após a atualização: ";
    deque.print();

    return 0;
}

