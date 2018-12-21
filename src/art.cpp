/*
 * art.cpp
 *
 *  Created on: Oct 19, 2017
 *      Author: Taliyah
 */
#include <iostream>
#include <fstream>
#include <sstream>
#include <time.h>
#include <iomanip>
#include <string>
using namespace std;
#include "art.hpp"
/*
*constructors with all data members passed as pararguments.
*parameters: string fn, string md, string ln, string title, time_t yr,
*string med, string gnr, string specINS, int rn, char wl[], int st, char stat,
*string nts
*return construstor creates an object of the class.
*/
Art::Art(const string fn, string md, string ln, string title, int yr,
string med, string gnr, string specINS, int rm, int st, char stat,
string nts,char wl){
	fname= fn;
	middle= md;
	lname = ln;
	this ->title = title;
	year = yr;
	media = med;
	genre = gnr;
	specialInstr = specINS;
	room = rm;
	slot= st;
	status= stat;
	notes = nts;
	wall = wl;
}


int Art::sellArt(const string nts,char stat){
	status = 'o'; //out of collection
	notes = nts;
	if(status == 'o')
	cout<<"\nThis art: "<<title<< " was sold: "<<status;
	return 0; //sucess
}

int Art::MoveArt(const int rm, char wl, int st, char stat){
	status = stat;
	room = rm;
	slot= st;
	wall = wl;
	if(room == 3)
	cout<<"\n" <<title<<" was moved to room:"<<room<<"\twall: "<<wall
	<<"\tslot: "<<slot;
	return 0;//normal

}


void Art::input() {
	cout<<"\nInput your artwork entries:\n";
	cout<<"First Name:";
	getline(cin,fname);
	cout<<"Middle Name:";
	getline(cin,middle);
	cout<< "Last Name:";
	getline(cin,lname);
	cout<<"Title:";
	getline(cin, title);
	cout<<"Year:";
	cin>> year;
	cout<<"Media:";
	getline(cin, media);
	cout<<"Genre:";
	getline(cin,genre);
	cout<<"special instructions:";
	getline(cin,specialInstr);
	cout<<"room:";
	cin>> room;
	cout<<"slot:";
	cin>> slot;
	cout<<"status:";
	cin>>status;
	cout<<"notes:";
	cin>>notes;
	cout<<"wall:";
	cin>>wall;

}


int Art::RemoveArt(const int rm, char wl, int st, char stat){
		status = stat;
		room = rm;
		slot= st;
		wall = wl;
		if(wall == 0)
            cout<<"\nThis Art"<<title<< "was removed from collection\n";
		return 0;
}
void Art::printArt() const {
	cout<<" "<<fname<<" "<<middle<<" "<<lname
			<<" "<<title<<" "<<year<<" "<<media
			<<" "<<genre<<" "<<specialInstr<<" "<<room<<" "<<slot<<" "<<status
			<<" "<<notes<<" "<<wall;
}
