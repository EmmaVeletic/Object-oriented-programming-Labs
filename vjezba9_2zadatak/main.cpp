#include <iostream>

using namespace std;

template <class type>
class Stack{

    private:
        type* data;
        unsigned int real_size;
        unsigned int virtual_size;
    public:
        Stack();
        Stack(type* data, unsigned int real_size, unsigned int virtual_size);
        void push(type toPush);
        void pop();
        bool isempty();

};

template <class type>
    Stack<type>::Stack(){
    data = new type[1];
    real_size = 0;
    virtual_size = 1;
}

template <class type>
    Stack<type>::Stack(type * data, unsigned int real_size, unsigned int virtual_size){
        if (real_size == virtual_size){
            real_size = real_size;
            virtual_size = virtual_size + 1;
            data = new type[virtual_size];

            for (int i=0; i< real_size; i++){
                data[i] = data[i];
        }
    }
        else{
            data = data;
            real_size = real_size;
            virtual_size = virtual_size;
    }
}


template <class type>
    void Stack<type>::push(type toPush){
        if(real_size+1 < virtual_size){
        data[real_size++] = toPush;
    }
        else if(real_size+1 == virtual_size){
        type* newData = new type[++virtual_size];

        for (int i=0; i<real_size; i++){
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
        data[real_size++] = toPush;
    }
}
template <class type>
    void Stack<type>::pop(){
        real_size --;
}

template <class type>
    bool Stack<type>::isempty(){
        if (real_size == 0) return true;
    return false;
}


int main(){

    Stack<int> mystack;
    cout << mystack.isempty() << endl;
    mystack.push(1);
    mystack.push(2);
    cout << mystack.isempty() << endl;
    mystack.pop();
    cout << mystack.isempty() << endl;
    mystack.pop();
    cout << mystack.isempty() << endl;


}
