#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>

int main() {

	std::vector<int> arr;
	std::string str;
	std::string tmp = "";
	int count = -1;

	std::getline(std::cin, str);

	for(char &c : str){
		count++;
		if( c == ','){
			arr.push_back(std::stoi(tmp.c_str()));
			tmp = "";
			continue;
		} 
		if( count == str.length()-1) {
			if ( count == str.length()-1){
				tmp += c;
				arr.push_back(std::stoi(tmp.c_str()));
				break;
			}
		}

		tmp += c;
	}
	

	for( int i : arr)
		printf("%d\n", i);

	return 0;
}