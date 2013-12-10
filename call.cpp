#include "dlist.h"
#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;

struct Caller{
    int timestamp;
    string name;
    string status; 
    int duration;
};

void read_file(Dlist<Caller*> & all_events){
	//get number of lines in file
	int num_lines;
	cin >> num_lines;
	//loop through and initialize ptr to struct
	for(int i = 0; i < num_lines; i++){
		int timestamp;
		string name;
		string status;
		int duration;
		cin >> timestamp >> name >> status >> duration;
		Caller *caller_ptr = new Caller;
    	caller_ptr->timestamp = timestamp;
    	caller_ptr->name = name;
    	caller_ptr->status = status;
    	caller_ptr->duration = duration;
    	all_events.insertBack(caller_ptr); 
	}
}

int main(){

	Dlist<Caller*> all_events;
	read_file(all_events);

	return 0;

}
