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

void process_calls(int tick, Dlist<Caller*> & copy_all_events, 
				   Dlist<Caller*> & platinum, Dlist<Caller*> & gold,
				   Dlist<Caller*> & silver, Dlist<Caller*> & regular){
	//print out tick number
	cout << "Starting tick #" << tick << "\n";
	while(!copy_all_events.isEmpty()){
		//get first element in queue
        Caller *caller_ptr = copy_all_events.removeFront();
        //if tick is equal to anyone's timestamp
        if(caller_ptr->timestamp == tick){
        	//insert into correct queue
            if(caller_ptr->status == "platinum"){
        		platinum.insertBack(caller_ptr);
    		}else if(caller_ptr->status == "gold"){
        		gold.insertBack(caller_ptr);
    		}else if(caller_ptr->status == "silver"){
        		silver.insertBack(caller_ptr);
    		}else{
        		regular.insertBack(caller_ptr);
    		}
    		//print out message about call
            cout << "Call from ";
            cout << caller_ptr->name << " a ";
            cout << caller_ptr->status << " member \n";
        }
    }
}

void answer_calls(int & duration, int tick, Dlist<Caller*> & platinum, Dlist<Caller*> & gold,
				  Dlist<Caller*> & silver, Dlist<Caller*> & regular){
	//create caller ptr variable
    Caller *caller_ptr;
    //if not busy, answer a call
    if(duration == 0){
        if(!platinum.isEmpty()){
        	caller_ptr = platinum.removeFront();
            cout << "Answering call from " << caller_ptr->name << "\n";
            duration = caller_ptr->duration;
        }else if(!gold.isEmpty()){
        	caller_ptr = gold.removeFront();
            cout << "Answering call from " << caller_ptr->name << "\n";
            duration = caller_ptr->duration;
        }else if(!silver.isEmpty()){
        	caller_ptr = silver.removeFront();
            cout << "Answering call from " << caller_ptr->name << "\n";
            duration = caller_ptr->duration;
        }else if(!regular.isEmpty()){
        	caller_ptr = regular.removeFront();
            cout << "Answering call from " << caller_ptr->name << "\n";
            duration = caller_ptr->duration;
        }else{
            cout << "there are no calls" << endl;
        }
    }else{
        tick++;
        duration--;
    }
}

int main(){

	Dlist<Caller*> platinum;
	Dlist<Caller*> gold;
	Dlist<Caller*> silver;
	Dlist<Caller*> regular;

	Dlist<Caller*> all_events;
	read_file(all_events);

    int tick = 0;
	int duration = 0;
   
    Dlist<Caller*> copy_all_events(all_events);

	process_calls(tick, copy_all_events, platinum, gold, silver, regular);

	answer_calls(duration, tick, platinum, gold, silver, regular);

	return 0;
}
