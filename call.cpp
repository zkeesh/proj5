#include "dlist.h"
#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;

int main(){
    string s;
    int i = 0;
    while(cin >> s){
    	int j = 0;

    	if(i == 0){
    		num_lines = atof(s.c_str());
    		cout << "num lines: " << s << endl;
    	}else{
    		string arr[4];
    		while(j < 4){
    			arr[j] = s;
    			cout << arr[j] << endl;
    			j++;
    		}
    	}
    	i++;


    }
    return 0;

    enum Job {STUDENT, FACULTY, STAFF};

struct Record {
    string name;
    string uniqname;
    Job job;
};


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



}

//use substring for 