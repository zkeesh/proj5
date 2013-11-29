#include "dlist.h"
#include <iostream>
#include <string>

using namespace std;

enum Job {STUDENT, FACULTY, STAFF};

struct Record {
    string name;
    string uniqname;
    Job job;
};

struct elem {
    int num;
};

int main() {
    
//    int x = 5;
//    int y = x + 5;
//    cout << y << endl;
    // cout << "Hello " << endl;
    
    
    Dlist<int> dlist1;
    
//    dlist.insertBack(3);
//    
//    dlist.print();
//    
//    dlist.removeBack();
//    
//    dlist.print();
    
    
//    dlist.insertBack(3);
//    dlist.print();
//    
//    cout << "Is empyt?" << dlist.isEmpty() << endl;
//    
//    dlist.removeBack();
//    dlist.print();
//    
//    cout << "Is empyt?" << dlist.isEmpty() << endl;
//    
//    cout << "CODE OVER" << endl;
    ////
    
    
    for(int i = 0; i < 100; i++){
        dlist1.insertFront(i);
    }
    
    dlist1.print();
    
    for(int i = 0; i < 100; i++){
        dlist1.removeBack();
        dlist1.print();
    }
    
//    Dlist<int> dlist2;
//    
//    dlist1.insertFront(3);
//    dlist1.insertFront(2);
//    dlist1.insertFront(1);
//    dlist1.insertFront(3);
//    dlist1.insertFront(2);
//    dlist1.insertFront(1);
//    dlist1.insertFront(3);
//    dlist1.insertFront(2);
//    dlist1.insertFront(1);
//    
//    dlist1.print();

//    void f(A<int>* p, A<int>* q) {
//        p->A<int>::~A(); // OK: destructor call
//        q->A<int>::~A<int>(); // OK: destructor call
//    } —end example ]
    
    
//    dlist2 = dlist1;
//    
//    dlist2.print();
//    
//    dlist1.Dlist<int>::~Dlist();
//    
//    dlist1.print();
//    
//    dlist2.Dlist<int>::~Dlist();
//    
//    dlist2.print();
    
    
    
//    dlist1.insertFront(3);
//    dlist1.insertFront(2);
//    dlist1.insertFront(1);
//    
//    dlist1.print();
//    
//    Dlist<int> dlist2(dlist1);
//    
//    dlist2.print();
    
    
//    dlist2.copyAll(dlist1);
//    
//    dlist2.print();
    
    
    
    
    
//    dlist.insertFront(1);
//    dlist.insertBack(2);
//    dlist.removeBack();
//    dlist.insertFront(3);
//    
//    dlist.print();
//    
//    cout << "-------" << endl;
//    
//    dlist.removeAll();
//    
//    dlist.print();
//    
//    Dlist<int> dlist2;
//    
//    dlist2.insertFront(3);
//    dlist2.insertBack(4);
//    dlist2.insertBack(5);
//    dlist2.insertFront(2);
//    dlist2.removeFront();
//    dlist2.removeBack();
//    dlist2.insertFront(1);
//    
//    dlist2.print();
//    
//    cout << "-------" << endl;
//    
//    dlist2.removeAll();
//    
//    dlist2.print();
    
    
    
//    elem_list.insertFront(10);
//    
//    elem_list.print();
//    
//    elem_list.insertBack(5);
//    
//    elem_list.print();
//    
//    elem_list.insertFront(7);
//    
//    elem_list.print();
//    
//    cout << elem_list.removeBack() << endl;
//    
//    elem_list.print();
    
    
    
    
//    cout << "1: " << elem_list.isEmpty() << endl;
//    
//    cout << "Inserting front..."  << endl;
//    
//    elem_list.insertFront(23);
//    
//    elem_list.print();
//    
//    elem_list.insertFront(5);
//    
//    elem_list.print();
//    
//    elem_list.insertFront(3);
//    
//    elem_list.print();
//    
//    elem_list.insertFront(7);
//    
//    cout << "answer: 7 3 5 23" << endl;
//    
//    elem_list.print();
//    
//    Dlist<int> elem_list2;
//    
//    cout << "1: " << elem_list2.isEmpty() << endl;
//
//    cout << "Inserting back..."  << endl;
//    
//    elem_list2.insertBack(23);
//    
//    elem_list2.print();
//    
//    elem_list2.insertBack(5);
//    
//    elem_list2.print();
//    
//    elem_list2.insertBack(3);
//    
//    elem_list2.print();
//    
//    elem_list2.insertBack(7);
//    
//    cout << "answer: 23 5 3 7" << endl;
//    
//    elem_list2.print();
    
    
    
    
    
    
    
//
//    cout << "0: " << elem_list.isEmpty() << endl;
    
//    
//    cout << "1: " << elem_list.isEmpty() << endl;
//    
//    elem_list.insertFront(5);
//    
//    elem_list.print();
//    
//    cout << "1: " << elem_list.isEmpty() << endl;
//    
//    elem_list.insertFront(5);
//    
//    elem_list.print();
    
    // elem_list.insertFront(6);
    // elem_list.insertFront(7);
    // elem_list.insertFront(8);
    // elem_list.insertFront(9);
    // elem_list.insertFront(4);
    // elem_list.insertFront(2);
    // elem_list.insertFront(3);
    
    // elem_list.print();
    
    // cout << "0: " << elem_list.isEmpty() << endl;
//    
//    Dlist<Record*> wolverineaccess; //records are big, so store pointer
//    
//    Record* p = new Record;
//    p->name = "Andrew DeOrio";
//    p->uniqname = "awdeorio";
//    p->job = FACULTY;
//    wolverineaccess.insertFront( p );
//    
//    // // do something with "wolverineaccess"
//    
//    // // don't forget to delete objects on the heap
//    while ( !wolverineaccess.isEmpty() ) {
//        Record *r = wolverineaccess.removeFront();
//        cout << r->uniqname << endl;
//        delete r;
//    }
    
    return 0;
}
