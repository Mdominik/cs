#include <string>
#include <iostream>
#include <vector>
#include <stack>
#include <deque>
#include <sstream>

//DEQUE
template<class T>
struct node_bt {
public:
    node_bt(T _val) : value(_val) {}
    node_bt<T>* left=nullptr;
    node_bt<T>* right=nullptr;
    T value;
    void toString() {
        std::cout << "Value: " << value << "\tAddress: "<< this <<
        "\nLeft: " << left << "\nRight: " << right << "\n\n";
    }
};

template<class T>
class binary_tree {
public:
    node_bt<T>* root=nullptr;
    int level=0;

    void store(T val){
        node_bt<T>* node = new node_bt<T>(val);
        if(level==0) {
            root = node;
            level++;
        }
        else {
            node_bt<T>* tmp = root;
            while(true){
                if(node->value >= tmp->value) {
                    if(!tmp->right) {
                        tmp->right = node;
                        break;
                    }
                    else {
                        tmp = tmp->right;
                    }
                }
                else if(node->value < tmp->value) {
                    if(!tmp->left) {
                        tmp->left = node;
                        break;
                    }
                    else {
                        tmp = tmp->left;
                    }
                }
            }
        }
        return;
    }

    node_bt<T>* remove() {
        node_bt<T>* node = root;
        back->prev->next = nullptr;
        back = back->prev;
        size--;
        return node;
    }
};


int main() {
    binary_tree<double> lista;
    lista.store(34.1);
    lista.store(12.1);
    lista.store(43.5);
    lista.store(39.21);
    std::cout << lista.root->right->left->value <<std::endl;
    //lista.printAll();
    //int id = binarySearch(vec, 70);

    return 0;
}
