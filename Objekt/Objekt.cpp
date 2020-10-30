#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;
class Dyr {

public:
	string name, sex, type;
	int age;
	
	

	Dyr(string type, string name, int age, string sex) {
		this->type = type;
		this->name = name;
		this->age = age;
		this->sex = sex;

	}

	Dyr() {};

};

class Dog: public Dyr {

public:

	string name, sex, type, breed;
	int age;

	Dog(string type, string name, int age, string sex, string breed) {
		this->type = type;
		this->name = name;
		this->age = age;
		this->sex = sex;
		this->breed = breed;
	}

	ostringstream toString() {
		std::ostringstream s;
		s << "The dog is a " << this->breed << " and its name is "
			<< this->name << ". Its a " + this->sex << " and its "
			<< this->age << " years old.";

		return s;
	}
};

int main()
{
	Dog myDog("dog", "fluffy", 12, "male", "poodle");
	ostringstream s = myDog.toString();

	cout << s.str() << endl;
	int x = 0;
	do
	{
		x++;
		cout << x << endl;
	} while (x < 3);
	
}