/*
 * art.hpp
 *
 *  Created on: Oct 19, 2017
 *      Author: Taliyah
 */

#ifndef ART_HPP_
#define ART_HPP_

#include <iostream>
#include <fstream>
#include <sstream>
#include <time.h>
#include <iomanip>
#include <string>
using namespace std;

class Art {
private:
	string fname;
	string middle;
	string lname;
	string title;
	int year;
	string media;
	string genre;
	string specialInstr;
	int room = 0;
	int slot = 0;
	char status= 'i';//in collection
	string notes; //what happened to art works
	char wall; //compass directions N,S,E,W

public:
Art()= default;
Art(const string fn, string md, string ln, string title, int yr,
string med, string gnr, string specINS, int rm, int st, char stat,
string nts,char wl);
int sellArt(const string nts,char stat);
int MoveArt(const int rm, char wl, int st, char stat);
int RemoveArt(const int rm, char wl, int st, char stat);

int WorkDescription(const string fn, string md, string ln,
		string title, int yr,string med, string gnr);

void input();
void printArt() const ;
char getStatus() const {return status;}
int getRoom() const {return room;}


};




#endif /* ART_HPP_ */
