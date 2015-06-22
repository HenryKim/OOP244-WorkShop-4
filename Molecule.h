//Hyungi Kim 025 741 125 OOP244 WorkShop 4//
#define MAX_CHAR 40
class Molecule{
	char cname [MAX_CHAR];
	char name [MAX_CHAR];
	double weight;
public:
	Molecule();
	bool read();
	void display() const;
};