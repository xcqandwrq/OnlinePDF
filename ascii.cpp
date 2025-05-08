#include<iostream>
#include<string>
using namespace std;
void StringTransform(string &s){
	for(int i = 0; i < s.length(); i++){
		s[i] = (char)((int)s[i] - 8);
	}
}
void RecoverStringTransform(string &s){
	for(int i = 0; i < s.length(); i++){
		s[i] = (char)((int)s[i] + 8);
	}
}
int main(int argc, char** argv){
	string s = (string)argv[1];
	// StringTransform(s);
	RecoverStringTransform(s);
	cout << s << endl;
	return 0;
}