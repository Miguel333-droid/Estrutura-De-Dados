#include <iostream>

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

    void printOrdered() const {
        if (isEmpty()) {
            cout << "Conjunto vazio." << endl;
            return;
        }

        T lastPrinted;       // último valor impresso
        bool first = true;   // para controlar o primeiro valor
        int count = 0;       // número de elementos no conjunto

        // Conta quantos elementos tem
        Node* temp = head;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        // Imprime os elementos em ordem crescente sem usar arrays
        for (int i = 0; i < count; i++) {
            Node* current = head;
            T minVal;
            bool found = false;

            while (current != nullptr) {
                if (first) {
                    // Procuramos o menor valor da lista para o primeiro elemento
                    if (!found || current->value < minVal) {
                        minVal = current->value;
                        found = true;
                    }
                } else {
                    // Procuramos o menor valor maior que o último impresso
                    if (current->value > lastPrinted && (!found || current->value < minVal)) {
                        minVal = current->value;
                        found = true;
                    }
                }
                current = current->next;
            }

            if (found) {
                cout << minVal << " ";
                lastPrinted = minVal;
                first = false;
            }
        }
        cout << endl;
    }
};

int main(){
    int q = 0, n;
    Set<int> set;

    cout << "Quantos numeros seu set tera? ";
    cin >> q;

    cout << "Agora, digite os numeros: ";
    for (int i = 0; i < q; i++) {
        cin >> n;
        set.insert(n);
    }

    cout << "Elementos em ordem crescente: ";
    set.printOrdered();

    return 0;
}

