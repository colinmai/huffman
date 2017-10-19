#include "iostream"
#include "queue"
#include "string"
#include <fstream>
#include "string"
#include "map"

using namespace std;
map<int, string> tabble;



struct heaper
{
	char data;
	unsigned freq;
	heaper *left, *right;

	heaper(char data, int freq)
	{
		left = right = NULL;
		this->freq = freq;
		this->data = data;
	}
};

class mintree
{
	int ascii;
	int freq;
	mintree* l;
	mintree* r;
	mintree* parent;
};





vector <unsigned char> encode(std::map<int, string> huffmantable2) {
	char q;
	int counter = 0;
	char s;
	vector <unsigned char> encode_output;
	encode_output.push_back(0);
	while (cin >> s) {
		if (&huffmantable2[s] != NULL)
		{
			for (int i = 0; i < huffmantable2[s].length(); ++i) {
				//cout << (unsigned char)(huffmantable2[s][i] - '0') << endl;
				//cout << (huffmantable2[s][i] - 0x30);
				//std::cout << huffmantable[s][i] << std::endl;
				//std::cout << "shit " << huffmantable[s] << std::endl;
				//std::cout << "this is " << huffmantable2[s][i] << std::endl;
				//unsigned char holder = huffmantable2[s][i] - '0';
				//std::cout << "vamos hacker " << int(holder) << std::endl;
				//holder = holder << (7 - counter);
				//std::cout << (int) encode_output.back() << std::endl;
				encode_output.back() = encode_output.back() + (((unsigned char)(huffmantable2[s][i]) - '0') << (7 - counter));
				//std::cout << int (encoded_data.back()) << std::endl;
				if (counter == 7) {
					encode_output.push_back(0x00);
					counter = -1;
					//cout << endl;
				}
				counter++;
			}
		}
	}
	unsigned char bits_left = 8 - counter;
	//for (int i = 0; i < bits_left; ++i)
	//cout << "0";


	//4 = 00000100 > "00000100" 

	encode_output.push_back(bits_left);
	for (vector<unsigned char>::iterator it = encode_output.begin(); it != encode_output.end(); ++it) {
		//cout << *it << endl;
		cout << (*it) << endl;
	}





	//cout << endl;
	//cout << int(encoded_data.front());
	return encode_output;
}



map<string, int> flip4() {
	map <string, int> flipped_table;
	for (map<int, string>::iterator it = tabble.begin(); it != tabble.end(); ++it)
		flipped_table[it->second] = it->first;
	for (map<string, int>::iterator it = flipped_table.begin(); it != flipped_table.end(); ++it)
		cout << it->first << "  " << it->second << '\n';
	return flipped_table;

}


int main(int argc, char** argv)
{
	/*int num1;
	int num2;
	int size = 0;
	vector< pair<char, int> > frequencies;

	std::cout << "stddds" << std::endl;
	while (!cin.eof()) {
	size++;
	cin >> num1 >> num2;
	if (cin.eof()) break;
	frequencies.push_back(std::make_pair((char)num1, num2));
	cout << num1 <<"   " <<num2 << endl;

	}


	HuffmanCodes(frequencies, size);
	for (map<int, string>::const_iterator it = huffmantable.begin(); it != huffmantable.end(); ++it)
	{
	cout << it->first << " " << it->second << "\n";
	}
	*/

	//map<string, int> flipped_table;

	ifstream input(argv[1]);
	std::map<int, string> mymap;
	string s;

	while (true) {
		input >> s;
		if (input.eof()) break;

		int key = std::stoi(s);

		input >> s;
		if (input.eof()) break;
		mymap[key] = s;
	}

	//for (map<int, string>::iterator it = mymap.begin(); it != mymap.end(); ++it)
	//cout << it->first << "  " << it->second << '\n';




	/*while (!cin.eof()) {







	}*/

	//vector <unsigned char> encoded_data = encode();
	encode(mymap);

}
