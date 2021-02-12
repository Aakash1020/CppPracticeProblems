int main() {
	string str1;
	char c1;
	char *a;
	char ch[100];
	int count=0;
	cout<<"Enter the Character ";
	getline(cin, str1);
	strcpy(ch, str1.c_str());
	for(a=ch; *a!='\0';a++){
	    c1=*a;
	    if(c1!=' '){
	        count++;
	    }
	}
	cout<<"Length is "<<count;
}


//Conting all the elements in a string

int main() {
    string str1;
    cout<<"Enter the Characters ";
    getline(cin, str1);
    cout<<"Length of the string is "<< str1.size() << endl;
}
