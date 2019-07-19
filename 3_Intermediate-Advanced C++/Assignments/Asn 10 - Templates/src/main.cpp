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
    node* next=nullptr;
    node* prev=nullptr;
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
    back = back->next;
    back->next->obj = obj;
    m_size++;
    assert(head);
    assert(back);
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
    queue<int> lists;
    int *x = nullptr;
    lists.enqueue(2);
    lists.enqueue(2);
    lists.enqueue(2);

    std::cout << lists.size() << std::endl;
    std::cout << lists.dequeue() << std::endl;
    return 0;
}
