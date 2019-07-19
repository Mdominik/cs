#include <iostream>
#include <vector>
#include <string>
#include <assert.h>


//enqueue(T obj)
//T dequeue
//T front
//int size
//bool isEmpty
//bool isFull


template<class T>
struct node {
    T obj;
    node<T>* next=nullptr;
    node<T>* prev=nullptr;
};

template<class T>
class queue {
public:

    void enqueue(const T& obj);
    T dequeue();
    T front() const;
    int size() const {return m_size;}
    bool isEmpty() {return m_size==0;}
    bool isFull() {return m_max_size==m_size;}
private:
    node<T>* head=nullptr;
    node<T>* back=nullptr;
    int m_max_size = 4;
    int m_size = 0;
};


//enqueue at the back
template<class T>
void queue<T>::enqueue(const T& obj) {
    if(back==nullptr) {
        try {
            back = new node<T>();
            head = back;
        } catch(int x) {
            std::cout << "Error nr " << x <<"Couldn't assign a node" << std::endl;
        }
        m_size++;
        return;
    }
    back->next = new node<T>();
    back->prev = back;
    back = back->next;
    back->next->obj = obj;
    std::cout << "no nie dziaa" << std::endl;
    m_size++;
    return;
}

//dequeue at the front
template<class T>
T queue<T>::dequeue() {
    T obj;
    if(head==nullptr) {
        std::cout << "Nothing to dequeue" << std::endl;
        return obj;
    }
    obj = head->obj;
    head = head->prev;
    return obj;
}

template<class T>
T queue<T>::front() const{
    return head;
}

int main() {
    queue<std::string> lists;
    int *x = nullptr;
    std::string a = "abc";
    std::string b = "cde";
    std::string c = "fgh";
    lists.enqueue(a);
    lists.enqueue(b);
    lists.enqueue(c);
    std::cout << lists.size() << std::endl;
    std::cout << lists.dequeue() << std::endl;
    return 0;
}
