#include "dlist.h"
#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;

#include <string>

/*
This is a helper function that takes in an operation
and a reference to the Dlist does the given operation
or returns an error about incorrect inputs
*/
void operate(string op, Dlist<double> &stack){
    double result;
    
    if(op == "a"){
        stack.print();
    }else if(!stack.isEmpty()){
        if(op == "p"){
            double x = stack.removeFront();
            cout << x << endl;
            stack.insertFront(x);
        }
        stack.print();
        
        
//        if(op == "c"){
//            while(!stack.isEmpty()){
//                stack.removeFront();
//            }
//        }else if(op == "q"){
//            cout << "going to return..." << endl;
//            return;
//        }
        double x = stack.removeFront();
//        cout << "x: " << x << endl;
//        if(op == "n"){
//            cout << "negating... " << endl;
//            result = -x;
//            stack.insertFront(result);
//        }else if(op == "d"){
//            cout << "duplicating... " << endl;
//            result = x;
//            stack.insertFront(result);
//            stack.insertFront(result);
//            cout << "printin' stack..." << endl;
//            stack.print();
//        }
//        if(op == "p"){
//            cout << x << endl;
//            stack.insertFront(x);
//        }
        if(!stack.isEmpty()){
            if(op == "c"){
                cout << "clearing all... " << endl;
                while(!stack.isEmpty()){
                    cout << "removing front..." << endl;
                    stack.removeFront();
                    cout << "printing... " << endl;
                    stack.print();
                }
            }else if(op == "q"){
                cout << "going to return..." << endl;
                return;
            }
            double y = stack.removeFront();
            // cout << "y: " << y << endl;
            if(op == "+"){
                cout << "going to add..." << endl;
                result = y + x;
                stack.insertFront(result);
                //stack.print();
            }
            else if(op == "-"){
                cout << "going to subtract..." << endl;
                result = y - x;
                stack.insertFront(result);
            }else if(op == "/"){
                cout << "going to divide..." << endl;
                result = y / x;
                stack.insertFront(result);
            }else if(op == "*"){
                cout << "going to multiply..." << endl;
                result = y * x;
                stack.insertFront(result);
            }
            
//            else if(op == "r"){
//                cout << "reversing... " << endl;
//                stack.insertFront(x);
//                stack.insertFront(y);
//                cout << "printing..." << endl;
//                stack.print();
//            }
            
        }else{
            //cout << "Not enough operands\n";
        }
    }else{
        //cout << "Not enough operands\n";
    }
}


int main() {
//    Dlist<int> a1;
//    a1.insertFront(5);
//    a1.insertFront(10);
//    cout << "A1" << endl;
//    a1.print();
//    
//    Dlist<int> a2(a1);
//    cout << "A1 after" << endl;
//    a1.print();
//    cout << "A2 " << endl;
//    a2.print();

    string input[] = {"2", "3", "+", "5", "7", "+", "/", "p"};
    Dlist<double> stack;
    string s;
    int i = 0;
    while(i < 8){
        s = input[i];
        i++;
        
        
        
        
        
        //cout << "S: #"<< i << " " << s << endl;
        
        if(isdigit(s[0])){
            double number = atof(s.c_str());
            stack.insertFront(number);
        }else{
            operate(s, stack);
        }
        
        //stack.print();
        
    }

}