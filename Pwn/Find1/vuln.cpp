#include <iostream>
#include <vector>
using namespace std;

char flag[]="Can you find flag?\n";
vector<char> s(flag,flag+sizeof(flag));
int main(){
	FILE *f = fopen("flag.txt", "r");
	  if (f) {
	    fgets(flag, sizeof(flag), f);
	    fclose(f);
	  }
	  
	for(char c:s) cout<<c;
	cin>>(char*)&s;
	for(char c:s) cout<<c;
}
