// copy this file to "dlist.h" and then modify it where specified below
#ifndef __DLIST_H__
#define __DLIST_H__
#include <cstddef>
#include <cassert>

#include <iostream>
using namespace std;

/***************************************
 * Do not modify the class declarations!
 ***************************************/
template <typename T>
class Dlist {
  //OVERVIEW: a doubly-linked list
 public:

  //EFFECTS:  returns true if the list is empty
  bool isEmpty() const;

  //MODIFIES: this
  //EFFECTS:  inserts v into the front of the list
  void insertFront(const T &datum);

  void print();

  //MODIFIES: this
  //EFFECTS:  inserts v into the back of the list
  void insertBack(const T &datum);

  //REQUIRES: list is not empty
  //MODIFIES: this
  //EFFECTS:  removes the item at the front of the list
  T removeFront();

  //REQUIRES: list is not empty
  //MODIFIES: this
  //EFFECTS:  removes the item at the back of the list
  T removeBack();
    
  Dlist();                                   // ctor
  Dlist(const Dlist &l);                     // copy ctor
  Dlist &operator=(const Dlist &l);          // assignment
  ~Dlist();                                  // dtor

 private:
  struct Node {                              // A private type
    Node   *next;
    Node   *prev;
    T      datum;
  };

  Node   *first; // The pointer to the first node (0 if none)
  Node   *last;  // The pointer to the last node (0 if none)

  //MODIFIES: this
  //EFFECTS:  copies all nodes from l to this
  void copyAll(const Dlist &l);

  // //MODIFIES: this
  // //EFFECTS:  removes all nodes
  void removeAll();
  
};

/**** DO NOT MODIFY ABOVE THIS LINE *****/


/***************************************
 * Member function implementations here
 ***************************************/

template <typename T>
Dlist<T>::Dlist(){
    first = 0;
    last = 0;
}

template <typename T>
bool Dlist<T>::isEmpty() const{
  return !first;
}

template <typename T>
void Dlist<T>::insertFront(const T &datum){
//  Node *np = new Node;
//  cout << np << endl;
//  np->datum = datum;
//  np->next = first;
//  first = np;
//  last = np;
    if(isEmpty()){
        //Make node
        Node *np = new Node;
        
        //set datum of np
        np->datum = datum;
        
        //set p/n to null
        np->prev = 0;
        np->next = 0;
        
        //set first/last to node
        first = np;
        last = np;
    }else{
        //make temp point to first
        Node *temp = first;
        
        //create node to store datum
        Node *np = new Node;
        np->datum = datum;
        
        //first points to np
        first = np;
        
        //set prev to null
        np->prev = 0;
        
        //set np next to temp
        np->next = temp;
        
        //set temp prev to np
        temp->prev = np;
    }
}

template <typename T>
void Dlist<T>::print(){
//  cout << "------" << endl;
//  Node *cur = first;
//  while(cur){
//    cout << "datum: " << cur->datum << endl;
//    cur = cur->next;
//  }
    
    if(isEmpty()){
        cout << "list is empty..." << endl;
    }
    
    cout << "--------" << endl;
    
    for (Node *np=first; np != NULL; np=np->next){
        cout << np->datum << " ";
    }
    
    cout << endl;
    
}


 //MODIFIES: this
 //EFFECTS:  inserts v into the back of the list
 template <typename T>
 void Dlist<T>::insertBack(const T &datum){
     if(isEmpty()){
         //Make node
         Node *np = new Node;
         
         //set datum of np
         np->datum = datum;
         
         //set p/n to null
         np->prev = 0;
         np->next = 0;
         
         //set first/last to node
         first = np;
         last = np;
     }else{
         //make temp point to last
         Node *temp = last;
         
         //create node to store datum
         Node *np = new Node;
         np->datum = datum;
         
         //last points to np
         last = np;
         
         //set next to null
         np->next = 0;
         
         //set np next to temp
         np->prev = temp;
         
         //set temp prev to np
         temp->next = np;
     }
 }

 //  //REQUIRES: list is not empty
 //  //MODIFIES: this
 //  //EFFECTS:  removes the item at the front of the list
 template <typename T>
 T Dlist<T>::removeFront(){
     //cout << "calling remove front" << endl;
     
     if(isEmpty()){
         return 0;
     }
     
     //make temp point to first
     Node *temp = first;
     
     //set first to point to next
     first = first->next;
     
     //hold data from temp in result
     T result = temp->datum;
     
     //delete what temp points to, set it = 0
     delete temp; temp = 0;
     
     //return result from above
     return result;
     
     
     /*
     Node *victim = first;
     first = first->next;
     T result = victim->datum;
     delete victim; victim=0;
     return result;
     
     */
     
 }

 //  //REQUIRES: list is not empty
 //  //MODIFIES: this
 //  //EFFECTS:  removes the item at the back of the list
template <typename T>
T Dlist<T>::removeBack(){
    
    if(isEmpty()){
        return 0;
    }
    
    //make temp point to last
    Node *temp = last;
    
    //set last to point to prev
    last = last->prev;
    
    //hold data from temp in result
    T result = temp->datum;
    
    //delete what temp points to, set it = 0
    delete temp; temp = 0;
    
    //if last is not null, set it's next to 0
    //this happens if more than 1 elem in list
    if(last != 0){
        last->next = 0;
    }else{
        first = 0;
    }
    
    //return result from above
    return result;
    

    
}


//template <typename T>
//List<T>::List(const List &l)
//: first(0), last(0) {
//    copyAll(l);
//}
                                  // ctor

 template <typename T>
 Dlist<T>::Dlist(const Dlist &l)
: first(0), last(0) {
    copyAll(l);
 }                     // copy ctor


//template <typename T>
//List<T>& List<T>::operator= (const List &l) {
//    if (this == &l) return *this;
//    removeAll();
//    copyAll(l);
//    return *this;
//}


template <typename T>
Dlist<T>& Dlist<T>::operator= (const Dlist &l){
    if(this == &l) return *this;
    removeAll();
    copyAll(l);
    return *this;
}


//Dlist<T>::Dlist &operator=(const Dlist &l){
//
//}          // assignment

//template <typename T>
//List<T>::~List() {
//    removeAll();
//}


template <typename T>
Dlist<T>::~Dlist(){
    //cout << "Calling destructor" << endl;
    removeAll();
}                                  // dtor

 //  //MODIFIES: this
 //  //EFFECTS:  copies all nodes from l to this
template <typename T>
void Dlist<T>::copyAll(const Dlist &l){
    for (Node *np=l.first; np; np=np->next)
        insertBack(np->datum);
}

 //  //MODIFIES: this
 //  //EFFECTS:  removes all nodes
 template <typename T>
 void Dlist<T>::removeAll(){
     while (!isEmpty())
         removeFront();
 }

/* this must be at the end of the file */
#endif /* __DLIST_H__ */
