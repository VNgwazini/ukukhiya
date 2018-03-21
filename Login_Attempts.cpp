#include "stdafx.h"
#include <string>
#include <iostream>
#include "Login_Attempts.h"
using namespace std;

const string stored_Password = { "Th!$!$@P@$$w0rd" };
string entered_Password, wrong_Password;

int main() {
	entered_Password = get_Password();
	wrong_Password = check_Password(stored_Password, entered_Password);

	if (wrong_Password != stored_Password) {
		for (int i = 0; i < 4; i++) {
			int attempts_Left = 4 - i;
			cout << "\nYou have " << attempts_Left << " password attempts left!\n";
			check_Password(stored_Password, wrong_Password);
		}
		cout << "\nYou have entered the wrong password too many times!\n";
		cout << "\nYou have now been locked out the system and the FBI has been notified!\n";
	}
}
