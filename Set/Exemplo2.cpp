#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

template <typename T>
class Set {
private:
    struct Node {
        T value;
        Node* next;

        Node(const T& val) : value(val), next(nullptr) {}
    };

    Node* head;

public:
    Set() : head(nullptr) {}

    ~Set() {
        clear();
    }

    bool isEmpty() const {
        return head == nullptr;
    }

    bool contains(const T& value) const {
        Node* current = head;
        while (current != nullptr) {
            if (current->value == value) {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    void insert(const T& value) {
        if (contains(value)) {
            cout << "Elemento já existe no conjunto." << endl;
            return;
        }

        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void remove(const T& value) {
        if (isEmpty()) {
            cout << "Conjunto vazio." << endl;
            return;
        }

        if (head->value == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Elemento removido do conjunto." << endl;
            return;
        }

        Node* current = head;
        while (current->next != nullptr && current->next->value != value) {
            current = current->next;
        }

        if (current->next == nullptr) {
            cout << "Elemento não encontrado no conjunto." << endl;
            return;
        }

        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
        cout << "Elemento removido do conjunto." << endl;
    }

    void clear() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }

    void print() const {
        if (isEmpty()) {
            cout << "Conjunto vazio." << endl;
            return;
        }

        Node* current = head;
        while (current != nullptr) {
            cout << current->value << " ";
            current = current->next;
        }
        cout << endl;
    }

    T findClosest(const T& target) const {
        if (isEmpty()) {
            throw runtime_error("Conjunto vazio.");
        }

        Node* current = head;
        T closest = current->value;
        T minDiff = abs(current->value - target);
        current = current->next;

        while (current != nullptr) {
            T diff = abs(current->value - target);
            if (diff < minDiff) {
                minDiff = diff;
                closest = current->value;
            }
            current = current->next;
        }

        return closest;
    }
};

// =======================
// MAIN
// =======================
int main() {
    int q = 0, n;
    Set<int> set;

    cout << "Quantos numeros seu set terá? ";
    cin >> q;

    cout << "Digite os numeros:\n";
    for (int i = 0; i < q; i++) {
        cin >> n;
        set.insert(n);
    }

    // Verifica se um valor está presente
    cout << "Digite um número para verificar se está no set: ";
    cin >> n;
    if (set.contains(n)) {
        cout << "O número " << n << " está no set." << endl;
    } else {
        cout << "O número " << n << " NÃO está no set." << endl;
    }

    // Encontra o mais próximo de um valor
    cout << "Digite um número para encontrar o mais próximo no set: ";
    cin >> n;
    try {
        int closest = set.findClosest(n);
        cout << "O valor mais próximo de " << n << " no set é: " << closest << endl;
    } catch (const runtime_error& e) {
        cout << e.what() << endl;
    }

    return 0;
}

