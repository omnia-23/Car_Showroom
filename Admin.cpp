#include "Admin.h"
#include <iostream>
#include <string>
#include <fstream>


using namespace std;


bool Admin:: adminlogin() {
	int x;
	do {
		cout << "\n\t|-------------------- Admin Login --------------------|\n\n\n";
		string d;
		cout << "\n\t° -> Your ID is:-> "; cin >> d;
		string u;
		cout << "\n\t° -> Your Username is:-> "; cin >> u;

		string p;
		cout << "\n\t° -> Your Password is:-> "; cin >> p;




		if (username == u && password == p && adminid == d) {
			cout << "\n\n\n\t° Admin Login Succefully \n\n";
			system("pause");
			return true;
		}
		else {
			x = 1;
			cout << "\n\n\n\t°Invalid Admin Login\n\n";
			
			system("pause");
			system("cls");
			
		}
	} while (x == 1);
}

Admin::~Admin(void)
{
}