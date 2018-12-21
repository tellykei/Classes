//============================================================================
// Name        : artstorage1.cpp
// Author      : Taliyah Rivera
// Version     : 1 11/9/2017
// Copyright   : Your copyright notice
// Description :Model and controller class for artstorage
//============================================================================

#include <iostream>
#include <fstream>
#include <sstream>
#include <time.h>
#include <iomanip>
#include <string>
#include "art.hpp"
using namespace std;

void printinstock ( Art array[], int x, Art& artwork);
int main(void) {
	Art artwork;
	Art* p;
	Art oldwork( "Thomas","","Jefferson", "Declaration of Independence", 1766,
			"document", "political", "none", 1, 2, 'i', "none", 'N' );
	Art array[25]= {
			{"John","L","Smith","Cats and dogs", 2003,"painting","comedy",
					"none", 2, 1,'i',"none",'E'},
			{"Leonardo","da","Vinci","Mona Lisa", 1797,"painting","potrait",
					"none",3, 1,'i',"none",'S'},
			{"Vincent", "van", "Gogh", "The Starry Night", 1889, "painting",
				"landscape painting", "move from inventory", 3, 2, 'o', "none",
					'0'},
			{"Michaelangelo","","","The Creation of Adam",1512,
					"fresco painting","religious", "none", 2, 2,'i',"none",' '},
			{"Claude","","Monet","The Japanese Footbridge",1922,"painting",
					"scenery","none",3, 1,'i',"none",'W'},
			{}

	};

cout<<"Welcome to the Art Storage\n";
cout<< "This is the artwork have now.\n";
int y;
for(y=0; y<5; y++){
    array[y].printArt();  //prints out all of the array
    cout<<endl;
}


	int x = 5;
	array[x++] = oldwork;

	cout<<"\nThis is the new artwork you have:\n";
	for (x=0;x<6;x++){
        array[x].printArt();  //prints out the array and the new addition
        cout<<endl;}
cout<<"\nThis is the status and room of the Declaration of Independence:"
		"\nStatus: "<< oldwork.getStatus()<<"\nroom: "<<oldwork.getRoom();
p = &array[2];

p-> MoveArt(3,'E',1,'i');
p-> RemoveArt(3,'0',2,'o');  //functions
p->sellArt("none", 'o');


int i = 6;
for( i=0;i<10;i++){
	p-> input(); //input new things into the array and print them out
	p-> printArt();
	array[i++];
	array[i].printArt();		//print out array
	cout<<endl;


}
}
/* Method Funtions for Art
Welcome to the Art Storage
This is the artwork have now.
 John L Smith Cats and dogs 2003 painting comedy none 2 1 i none E
 Leonardo da Vinci Mona Lisa 1797 painting potrait none 3 1 i none S
 Vincent van Gogh The Starry Night 1889 painting landscape painting move from inventory 3 2 o none 0
 Michaelangelo   The Creation of Adam 1512 fresco painting religious none 2 2 i none
 Claude  Monet The Japanese Footbridge 1922 painting scenery none 3 1 i none W

This is the new artwork you have:
 John L Smith Cats and dogs 2003 painting comedy none 2 1 i none E
 Leonardo da Vinci Mona Lisa 1797 painting potrait none 3 1 i none S
 Vincent van Gogh The Starry Night 1889 painting landscape painting move from inventory 3 2 o none 0
 Michaelangelo   The Creation of Adam 1512 fresco painting religious none 2 2 i none
 Claude  Monet The Japanese Footbridge 1922 painting scenery none 3 1 i none W
 Thomas  Jefferson Declaration of Independence 1766 document political none 1 2 i none N

This is the status and room of the Declaration of Independence:
Status: i
room: 1
The Starry Night was moved to room:3	wall: E	slot: 1
This art: The Starry Night was sold: o
Input your artwork entries:
First Name:kelly
Middle Name:
Last Name:clarkson
Title:unstoppable
Year:2001
Media:
Genre:song
special instructions:none
room:1
slot:2
status:i
notes:none
wall:2
 kelly
 clarkson
 unstoppable
 2001
 song
 none
 1
 2
 i
 none
 2
*/
