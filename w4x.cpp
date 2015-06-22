// Workshop 4 - Molecules
 // w4x.cpp
//Hyungi Kim 025 741 125 OOP244 WorkShop 4//

 #include <iostream>
 using namespace std;
 #include "w4x.h"
 #include "Molecule.h"

 int main() {
     int n = MAX_MOLECULES;
     Molecule molecule[MAX_MOLECULES];

     cout << "Molecular Information\n";
     cout << "=====================" << endl;

     for (int i = 0; i < MAX_MOLECULES; i++) {
         if (!molecule[i].read()) {
             n = i;
             i = MAX_MOLECULES;
         }
         cout << endl;
     }

     cout << "Structure            Name                     Mass\n";
     cout << "==================================================" << endl; 

     for (int i = 0; i < n; i++)
         molecule[i].display();
 }