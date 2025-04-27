#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Children {
public:

	void getData() {
		cout << Name << endl;
		cout << Surname << endl;
		cout << age << endl;
	}

	void enterData() {
		cin >> Name;
		cin >> Surname;
		cin >> age;
	}

private:
	string Name;
	string Surname;
	int age;

};



int main(void) {
	vector<Children> kids;
	int choice;
	do {
		cout << "\n:Menu" << endl;
		cout << "1. Enter information about children" << endl;
		cout << "2. Show information about kid" << endl;
		cout << "3. End Program" << endl;
		cout << "Enter your choice" << endl;
		cin >> choice;

		switch (choice) {

		case 1: {
			Children newKid;
			newKid.enterData();
			kids.push_back(newKid);
			break;
		}
		case 2: {
			if (kids.empty())
				cout << "There is no information about kids";
			else
				for (int i = 0; i < kids.size(); i++) {
					cout << "\nKid(" << i + 1 << "):" << endl;
					kids[i].getData();
				}
			break;
		}
		case 3: {
			cout << "End of program";
			return 0;
		}
		default:
			cout << "Error";
			break;
		}
	}

	while (choice != 3);
}