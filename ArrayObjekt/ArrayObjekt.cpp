#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Bil {
public:
	string merke, regNr;
	int hk;


	Bil(string merke, string regNr, int hk) {
		this->merke = merke;
		this->regNr = regNr;
		this->hk = hk;
	}

	Bil();

		
	string getMerke() {
		return this->merke;
	}

	string getRegNr() {
		return this->regNr;
	}

	int getHk() {
		return this->hk;
	}

};


int main() 
{
	//cout << "Hei sveis" << endl;
	Bil bil1("BMW", "PD44190", 168);
	Bil bil2("Hyundai", "LH84190", 78);
	Bil bil3("Golf", "PC27723", 120);
	Bil bil4("Mercedes", "AH12322", 140);
	Bil bil5("Audi", "PD42390", 85);


	vector<Bil> biler;
	biler.push_back(bil1);
	biler.push_back(bil2);
	biler.push_back(bil3);
	biler.push_back(bil4);
	biler.push_back(bil5);

	for (int i = 0; i < biler.size(); i++) {
		cout << "Bilmerke: " << biler[i].getMerke() << ", RegNr: " << biler[i].getRegNr() 
			<< ", Hestekrefter: " << biler[i].getHk() << endl;
	}

	for (int x = 0; x < biler.size(); x++) {
		cout << biler[x].getMerke() << endl;
	}
	return 0;
}