#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;
typedef std::map<int, int> StrIntMap;

void countWords(StrIntMap& words, string input) {
	char s;
        for (int i = 0; i < 1; i++) {
			cout << "";
		}       
	for(char& c : input) {
	        int a = int(c);
		++words[a];
	}
}

int main(int argc, char** argv) {
        string lineinput;
	string input;
	while (getline(cin, lineinput))
	{
	  input = lineinput;
	}  
	    
	if (argc < 1)
	  return(EXIT_FAILURE);
	StrIntMap w;
        countWords(w, input);
	for (StrIntMap::iterator p = w.begin();
		p != w.end(); ++p) {
	        std::cout << p->first << "     "
		<< p->second << endl;
	}
	return 0;
}
