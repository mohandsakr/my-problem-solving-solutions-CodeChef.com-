//============================================================================.
//problem link :https://www.codechef.com/JULY17/problems/NITIKA
// Name        : Whats_in_the_Name.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : use this under your responsiblity
// Description : Hello World in C++, Ansi-style
//status:accepted
//============================================================================

#include <iostream>
#include <string>
using namespace std;
string formatname(string s){
	int len=s.length();
	for(int i=0;i<len;i++){
					if(i==0)
					s[0]=toupper(s[0]);
					else
						s[i]=tolower(s[i]);
				 }
	return s;
}

int main() {
	 int t;
	 cin>>t;
	 cin.ignore();
	 while(t--){
		 string s,s2;


		getline(cin,s);
		int x=s.find(" ");
		while(x!=-1){
			s2+=toupper(s[0]);
			s2+=". ";
			s.erase(0,(x-0)+1);
			x=s.find(" ");
		}
		s2+=formatname(s);
		 cout<<s2<<"\n";

		}








	return 0;
}
