#include "dlist.h"
#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;

#include <string>

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
                result = x / y;
            }
            stack.insertFront(result);
        }else{
            cout << "Not enough operands\n";
        }
    }else{
        cout << "Not enough operands\n";
    }
}









/*
This is a helper function that takes in an operation
and a reference to the Dlist does the given operation
or returns an error about incorrect inputs
*/
void operate(string op, Dlist<double> &stack){


    handle_math(op, stack);



//     double result;

//     if(op == "a"){
//         stack.print();
//     }else if(!stack.isEmpty()){

//         if(op == "d"){
//            //cout << "duplicating... " << endl;
//            double x = stack.removeFront();
//            stack.insertFront(x);
//            stack.insertFront(x);
//            stack.insertFront(x);
//            //cout << "printin' stack..." << endl;
//            //stack.print();
//         }
//         if(op == "p"){
//             double x = stack.removeFront();
//             cout << x << endl;
//             stack.insertFront(x);
//         }
//         //stack.print();
        
        
// //        if(op == "c"){
// //            while(!stack.isEmpty()){
// //                stack.removeFront();
// //            }
// //        }else if(op == "q"){
// //            cout << "going to return..." << endl;
// //            return;
// //        }
//         double x = stack.removeFront();
// //        cout << "x: " << x << endl;
// //        if(op == "n"){
// //            cout << "negating... " << endl;
// //            result = -x;
// //            stack.insertFront(result);
//        //}

// //        if(op == "p"){
// //            cout << x << endl;
// //            stack.insertFront(x);
// //        }
//         if(!stack.isEmpty()){
//             if(op == "c"){
//                 cout << "clearing all... " << endl;
//                 while(!stack.isEmpty()){
//                     cout << "removing front..." << endl;
//                     stack.removeFront();
//                     cout << "printing... " << endl;
//                     stack.print();
//                 }
//             }else if(op == "q"){
//                 cout << "going to return..." << endl;
//                 return;
//             }
//             double y = stack.removeFront();
//             // cout << "y: " << y << endl;

            
// //            else if(op == "r"){
// //                cout << "reversing... " << endl;
// //                stack.insertFront(x);
// //                stack.insertFront(y);
// //                cout << "printing..." << endl;
// //                stack.print();
// //            }
            
//         }else{
//             //
//         }
//     }else{
//         //cout << "Not enough operands\n";
//     }
}








// // reading a text file
// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// int main () {
//   string s;
//   ifstream myfile ("calc.in");
//   Dlist<double> stack;
//   if (myfile.is_open())
//   {
//     while ( getline (myfile,s) )
//     {
//         //cout << s << endl;
//         if(isdigit(s[0])){
//             double number = atof(s.c_str());
//             stack.insertFront(number);
//         }else{
//             operate(s, stack);
//         }

//     }
//     myfile.close();
//   }

//   else cout << "Unable to open file"; 

//   return 0;
// }

/*

+
d
+
p
2
-
p
q

*/




int main() {

    string input[] = {"30", "10", "/", "10", "+"};
    Dlist<double> stack;
    string s;
    int i = 0;
    while(i < 5){
        s = input[i];
        i++;
        if(isdigit(s[0])){
            double number = atof(s.c_str());
            stack.insertFront(number);
        }else{
            operate(s, stack);
        }
        stack.print();
    }

}