// ukukhiya.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	const string stored_Password = { "Th!$!$@P@$$w0rd" };
	string entered_Password;

	cout << "Please enter the password to continue: \n";
	cin >> entered_Password;

	if (stored_Password != entered_Password) {
		for (int i = 0; i < 4; i++) {
			int attempts_Left = 4 - i;
			cout << "\nError! The password you entered was not valid.\n";
			cout << "\nYou have " << attempts_Left << " password attempts left!\n";
			cout << "\nPlease enter your password again.\n\n";
			cin >> entered_Password;
		} cout << "\nYou have entered the wrong password too many times!\n";
		cout << "\nYou have now been locked out the system and the FBI has been notified!\n";
	}
	else cout << "\nAccess Granted!";
	system("pause");
    return 0;

	
}

