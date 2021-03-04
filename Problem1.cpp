#include<iostream>
#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;


int main(){
	char str[100];
	char newstr[100];
	cout<<"Enter a word: ";
	cin>>str;
	
	int char_code;
	for(int i=0;i<sizeof(str);++i){
		
		char_code = int(str[i]);
		if(char_code == 122){
			str[i]=char(97);
		}
		else if(char_code == 90){
			str[i]=char(65);
		}
		else if(char_code >=65 && char_code<=90 || char_code>=97 && char_code<=122){
			str[i]=char(char_code + 1);
		}
		newstr[i]=str[i];
		if (newstr[i] == 'a' || newstr[i] == 'e'
            || newstr[i] == 'i' || newstr[i] == 'o'
            || newstr[i] == 'u') {
            newstr[i] = newstr[i] - 'a' + 'A';
        }
	}
	
	cout<<newstr<<endl;	
	return 0;
}
