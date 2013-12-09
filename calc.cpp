#include "dlist.h"
#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;

void handle_math(string op, Dlist<double> &stack){
    if(!stack.isEmpty()){
        double y = stack.removeFront();
        if(!stack.isEmpty()){
            double x = stack.removeFront();
            double result;
            if(op == "+"){
                result = x + y;
            }else if(op == "-"){
                result = x - y;
            }else if(op == "*"){
                result = x * y;
            }else{
                if(y == 0){
                    stack.insertFront(y);
                    stack.insertFront(x);
                    cout << "Divide by zero\n";
                    return;
                }
                result = x / y;
            }
            stack.insertFront(result);
        }else{
            stack.insertFront(y);
            cout << "Not enough operands\n";
        }
    }else{
        cout << "Not enough operands\n";
    }
}

void negation(Dlist<double> &stack){
    if(!stack.isEmpty()){
        double x = stack.removeFront();
        double result = x * -1;
        stack.insertFront(result);
    }else{
        cout << "Not enough operands\n";
    }
}

void duplication(Dlist<double> &stack){
    if(!stack.isEmpty()){
        double x = stack.removeFront();
        stack.insertFront(x);
        stack.insertFront(x);
        stack.insertFront(x);
    }else{
        cout << "Not enough operands\n";
    }
}

void reversal(Dlist<double> &stack){
    if(!stack.isEmpty()){
        double x = stack.removeFront();
        if(!stack.isEmpty()){
            double y = stack.removeFront();
            stack.insertFront(x);
            stack.insertFront(y);
        }else{
            stack.insertFront(x);
            cout << "Not enough operands\n";
        }
    }else{
        cout << "Not enough operands\n";
    }
}

void print(Dlist<double> &stack){
    if(!stack.isEmpty()){
        double x = stack.removeFront();
        cout << x << endl;
        stack.insertFront(x);
    }else{
        cout << "Not enough operands\n";
    }
}

void clear(Dlist<double> &stack){
    while(!stack.isEmpty()){
        stack.removeFront();
    }
}

void print_all(Dlist<double> &stack){
    if(!stack.isEmpty()){
        Dlist<double> stack_copy(stack);
        while(!stack_copy.isEmpty()){
            cout << stack_copy.removeFront() << " ";
        }
    }
    cout << " \n";
}

void operate(string op, Dlist<double> &stack){
    if(op == "+" || op == "-" || op == "*" || op == "/"){
        handle_math(op, stack);
    }else if(op == "n"){
        negation(stack);
    }else if(op == "d"){
        duplication(stack);
    }else if(op == "r"){
        reversal(stack);
    }else if(op == "p"){
        print(stack);
    }else if(op == "c"){
        clear(stack);
    }else if(op == "a"){
        print_all(stack);
    }else{
        cout << "Bad input\n";
    }
}

int main() {
    //string input[] = {"90", "34", "12", "33", "55", "66", "+", "*", "-", "+", "-", "p"};
    Dlist<double> stack;
    string s;
    //int i = 0;
    while(cin >> s){
        //s = input[i];
        //i++;
        if(isdigit(s[0])){
            double number = atof(s.c_str());
            stack.insertFront(number);
        }else{
            if(s == "q"){
                break;
            }
            operate(s, stack);
        }
        //stack.print();
    }
    return 0;
}