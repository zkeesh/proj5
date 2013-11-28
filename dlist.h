// copy this file to "dlist.h" and then modify it where specified below
#ifndef __DLIST_H__
#define __DLIST_H__
#include <cstddef>
#include <cassert>

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

  //MODIFIES: this
  //EFFECTS:  inserts v into the back of the list
  // void insertBack(const T &datum);

  //REQUIRES: list is not empty
  //MODIFIES: this
  //EFFECTS:  removes the item at the front of the list
  // T removeFront();

  //REQUIRES: list is not empty
  //MODIFIES: this
  //EFFECTS:  removes the item at the back of the list
  // T removeBack();

  // Dlist();                                   // ctor
  // Dlist(const Dlist &l);                     // copy ctor
  // Dlist &operator=(const Dlist &l);          // assignment
  // ~Dlist();                                  // dtor

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
  // void copyAll(const Dlist &l);

  // //MODIFIES: this
  // //EFFECTS:  removes all nodes
  // void removeAll();
};

/**** DO NOT MODIFY ABOVE THIS LINE *****/


/***************************************
 * Member function implementations here
 ***************************************/

template <typename T>
bool Dlist<T>::isEmpty() const{
  return !first;
}

template <typename T>
void Dlist<T>::insertFront(const T &datum){

}

 //  //MODIFIES: this
 //  //EFFECTS:  inserts v into the back of the list
 //  template <class T>
 //  void DList<T>::insertBack(const T &datum){

 //  }

 //  //REQUIRES: list is not empty
 //  //MODIFIES: this
 //  //EFFECTS:  removes the item at the front of the list
 //  template <class T>
 //  T DList<T>::removeFront(){
 //    return T;
 //  }

 //  //REQUIRES: list is not empty
 //  //MODIFIES: this
 //  //EFFECTS:  removes the item at the back of the list
 //  template <class T>
 //  T DList<T>::removeBack(){
 //    return T;
 //  }

 //  template <class T>
 //  DList<T>::Dlist(){}                                   // ctor

 //  template <class T>
 //  DList<T>::Dlist(const Dlist &l){}                     // copy ctor

 //  template <class T>
 //  DList<T>::Dlist &operator=(const Dlist &l){}          // assignment

 //  template <class T>
 //  DList<T>::~Dlist(){}                                  // dtor

 //  //MODIFIES: this
 //  //EFFECTS:  copies all nodes from l to this
 //  template <class T>
 //  void DList<T>::copyAll(const Dlist &l){}

 //  //MODIFIES: this
 //  //EFFECTS:  removes all nodes
 //  template <class T>
 //  void DList<T>::removeAll(){}

/* this must be at the end of the file */
#endif /* __DLIST_H__ */
