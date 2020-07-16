#include <iostream>

template <class T> 
class Fila{
    private:
    int size;
    int top;
    T* clientes;

    public:
    Fila(int s){
        this->size = s;
        this->top = -1;
        this->clientes = new T[size];
    }

    ~Fila() {
        delete[] clientes;
    }

    void push(T cliente){
        if(top == (size -1)){
            std::cout << "Fila cheia" << std::endl;
        }else{
            this->clientes[++top] = cliente;
        }
    }
    void pop(){
        if(top == -1){
            std::cout << "Fila vazia" << std::endl;
        }else{
            this->clientes[top--];
        }
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }
    T back(){
        return this->clientes[top];
    }
};