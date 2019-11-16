#include <iostream>
#include<iomanip>
#include <list>
#include <fstream>
#include <string.h>
#include <map>
#include <stdio.h>
#include <ctype.h>
#define FILENAME_MAX 301
using namespace std;
typedef map<string, int> MapType;
int main(){
	char filename[FILENAME_MAX];
	cout <<"Enter a file name and press enter: ";
	cin.getline(filename, FILENAME_MAX);
	ifstream ifile;
	ifile.open(filename);
	if (!ifile){
		cout << filename<<" could not be opened." << '\n';
		return -1;
	}
	char ch[1000];
	char c[1000];
	MapType m;
    ofstream Excel;

    Excel.open("data.csv");
	while(ifile){

    ifile>>c;
    for(int i=0;i<sizeof(ch);i++){

        if(ispunct(c[i]) || !isalpha(c[i]))
            c[i]='\0';
        }

    ++m[c];


}
int x=0;

for (MapType::iterator word = m.begin(); word != m.end(); ++word) {
        string spc=iter->first;
    if(spac=="\0")//Whitespace removed
    continue;
        Excel<<word->first<<", "<<word->second<<endl;

}

for (MapType::iterator iter = m.begin(); iter != m.end(); ++iter) {
        string check=iter->first;
    if(check=="\0")//Whitespace removed
    continue;
	cout << iter->first << " occurred " << iter->second << " times.\n";
    x++;

}
cout<<"Total: "<<x;
Excel.close();
return 0;

}

