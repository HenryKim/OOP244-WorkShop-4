//Hyungi Kim 025 741 125 OOP244 WorkShop 4// 
#include <iostream>
#include <stdio.h>
#include <cstring>
 using namespace std;
#include "w4x.h"
#include "Molecule.h"

	Molecule::Molecule(){
		cname[0]='\0';
		name[0]='\0';
		weight=0.0;
 }
	bool Molecule::read(){
		int rc=1;
		int temp;
		cout<<"Enter structure :";
		cin>>cname;
		if (!strcmp(cname, "0")) {
		rc = false;
		}
		
		else{
		cin.ignore(1000,'\n');
		cout<<"Enter full name :";
		cin.getline(name, MAX_CHAR);
		cout<<"Enter weight    :";
		cin>>weight;
		return rc;}
	}
	void Molecule::display() const{
		cout.setf(ios::left);
		cout.width(21);
		cout << cname;
		cout.width(23);
		cout << name;
		cout.setf(ios::fixed);
		cout.precision(3);
		cout << weight << endl;
	}
