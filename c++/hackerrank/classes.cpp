/*
 * =====================================================================================
 *
 *       Filename:  classes.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/12/2018 09:58:20
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Humberto Esparza (Devlious), humberto.dev96@gmail.com
 *        Company:  Blinkers
 *
 * =====================================================================================
 */

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class Student {

	string first_name;
	string last_name;
	int age;
	int standard;

	public:
		void set_age(int age) {
			this->age = age;
		}

		int get_age() {
			return this->age;
		}

		void set_standard(int standard){
			this->standard = standard;
		}

		int get_standard() {
			return this->standard;
		}

		void set_first_name(string first_name) {
			this->first_name = first_name;
		}

		string get_first_name() {
			return this->first_name;
		}

		void set_last_name(string last_name) {
			this->last_name = last_name;
		}

		string get_last_name() {
			return this->last_name;
		}

		string to_string() {
			return std::to_string(this->age) + "," + this->first_name + "," + this->last_name + "," + std::to_string(this->standard);
		}
};

int main() {

	int age, standard;
	string first_name, last_name;

	cin >> age >> first_name >> last_name >> standard;

	Student st;

	st.set_age(age);
	st.set_standard(standard);
	st.set_first_name(first_name);
	st.set_last_name(last_name);

	cout << st.get_age() << "\n";
	cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
	cout << st.get_standard() << "\n";
	cout << endl;
	cout << st.to_string();

	return 0;
}
