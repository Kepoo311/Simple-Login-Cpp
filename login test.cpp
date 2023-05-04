#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool islog(){

	string username, password, un, pw;
	cout << "Enter Username :"; cin >> username;
	cout << "Enter password : "; cin >> password;

	ifstream read("E:\\" + username + ".txt");
	getline(read, un);
	getline(read, pw);

	if (un == username && pw == password)
	{
		return true;
	}
	else{
		return false;
	}

}


int main()
{
	int choice;

	cout << "1. Regist\n2. Login\nyour choice :"; cin >> choice;
	if (choice == 1)
	{
		string username, password;

		cout <<"Input Username :"; cin >> username;
		cout <<"Input Password :"; cin >> password;

		ofstream file;
		file.open("E:\\" + username + ".txt");

		file << username << endl << password;
		file.close();

		main();
	} else if(choice == 2){
		bool status = islog();

		if (!status){
			cout << "False Log !!" << endl;
			system("pause");
			return 0;
		} else {
			cout << "succes Log !!" << endl;
			system("pause");
			return 1;
		}
	}
}