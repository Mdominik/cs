#include <string>
#include <iostream>
#include <vector>
#include <stack>
#include <deque>
#include <sstream>
//STACK
// template<class T>
// struct node {
// public:
//     node(T _val, node* _next) : value(_val), next(_next) {}
//     node<T>* next;
//     T value;
// };
//
// template<class T>
// class list {
// public:
//     list()=default;
//     node<T> head;
//     int size;
//     int push(T value){
//         if(!head) {
//             return -1;
//         } else {
//             node<T> tmp(value, head->next);
//             head = tmp;
//             return 0;
//         }
//     }
// };


//DEQUE
template<class T>
struct node_deq {
public:
    node_deq(T _val) : value(_val) {}
    node_deq<T>* next=nullptr;
    node_deq<T>* prev=nullptr;
    T value;
    void toString() {
        std::cout << "Value: " << value << "\tAddress: "<< this <<
        "\nNext: " << next << "\nPrev: " << prev << "\n\n";
    }
};

template<class T>
class deque {
public:
    ~deque() {

    }
    node_deq<T>* front=nullptr;
    node_deq<T>* back=nullptr;
    int size=0;

    void push_front(T val){
        node_deq<T>* node = new node_deq<T>(val);
        if(!front && !back) {
            front = node;
            back = node;
        } else {
            node_deq<T>* tmp;
            tmp = front;
            front = node;
            front->next = tmp;
            front->next->prev = front;
        }
        size++;
        return;
    }

    node_deq<T>* pop_back() {
        if(size==1) {
            std::cout << "Popped the last one!" << std::endl;
            back=nullptr;
            front=nullptr;
            size--;
            return nullptr;
        }
        if(size==0) {
            std::cout << "Nothing to pop!" << std::endl;
            return nullptr;
        }
        node_deq<T>* node = back;
        back->prev->next = nullptr;
        back = back->prev;
        size--;
        return node;
    }

    void printAll() {
        if(size>0) {
            node_deq<T> *tmp=front;
            for(int i =0; i<size; i++) {
                tmp->toString();
                tmp = tmp->next;
            }
        } else {
            std::cout << "No elements in the deque" << std::endl;
        }
    }
};


int main() {
    deque<double> lista;
    lista.push_front(2.2343);
    lista.push_front(3.3);
    lista.push_front(2.2343);
    lista.push_front(3.3);
    lista.push_front(2.2343);
    lista.push_front(3.3);
    lista.push_front(2.2343);
    lista.push_front(3.3);
    lista.push_front(2.2343);
    lista.push_front(3.3);


    std::cout << lista.back <<std::endl;
    lista.printAll();
    //int id = binarySearch(vec, 70);

    return 0;
}
