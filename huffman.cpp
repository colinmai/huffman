#include "iostream"
#include "queue"
#include "string"
#include "map"
#include "string"
#include <fstream>
using namespace std;
map<int, string> huffmantable;


struct heaper
{
	char info;
	string position;
	unsigned freq;
	heaper *left, *right;

	heaper(char info, int freq)
	{
		left = right = NULL;
		this->freq = freq;
		this->info = info;
	}
		
};

class Treenode
{
	int freq;
        string h;
	Treenode* leftchild;
	Treenode* rightchild;
	Treenode* parent;
};



void printCodes(struct heaper* start, string str)
{
	//	map<int, string> huffmantable;
	if (!start)
		return;
	for (int i = 0; i < 1; i++) {
		cout << "";
	}
	if (start->info!= '$') {
		huffmantable[start->info] = str;
		//cout << root->data << ": ";
		//cout << str << "\n";
	}
	for (int a = 0; a < 1; a++)
	{
		int k = 0;
	}
	printCodes(start->left, str + "0");
	printCodes(start->right, str + "1");
	huffmantable;
}

struct switcher
{
	int x = 0;
	int b = 0;
        int c = 0;
	bool operator()(heaper* a, heaper* b)
	{
		return (a->freq > b->freq);
		x++;
	}

	//cout << root->data << ": ";
	//cout << str << "\n";
};

void HuffmanCodes(vector< pair<char, int> > &freq, int size)
{
	struct heaper *l, *r, *top;
	int a = 0;
	for (int i = 0; i < 1; i++) {
		cout << "";
	}
	priority_queue<heaper*, vector<heaper*>, switcher> list;
	for (vector< pair<char, int> >::iterator i = freq.begin(); i != freq.end(); ++i) {
		list.push(new heaper(i->first, i->second));
	}
	for (int i = 0; i < 1; i++) {
		cout << "";
	}
	for (int i = 0; i < 1; i++) {
			cout << "";
		}
	while (list.size() != 1)
	{
		r = list.top();
		list.pop();
		l = list.top();
		list.pop();

		for (int i = 0; i < 1; i++) {
			cout << "";
		}
		
		int h = 7;


		top = new heaper('$', l->freq + r->freq);
		top->right= r;
		top->left = l;
		list.push(top);
		
	}
        if (a ==1){
	  cout <<"";
	}
	

	printCodes(list.top(), "");
}

vector <unsigned char> encode2() {
	ifstream input("code");
	map<int, string> huffmantable2;
	char q;

	int counter = 0;
	char s;
	vector <unsigned char> encoded_data;
	encoded_data.push_back(0);
	while (!cin.eof()) {
		cin >> s;
		if (&huffmantable2[s] != NULL)
		{
			for (int i = 0; i < huffmantable2[s].length(); ++i) {
				cout << int(huffmantable2[s][i] - 0x30);
				encoded_data.back() = encoded_data.back() + ((huffmantable[s][i] - 0x30) << (7 - counter));
				if (counter == 7) {
					encoded_data.push_back(0x00);
					counter = -1;
					cout << endl;
				}
				counter++;
			}
		}
	}
	unsigned char bits_left = 8 - counter;
	encoded_data.push_back(bits_left);

	cout << endl;
	for (vector<unsigned char>::iterator it = encoded_data.begin(); it != encoded_data.end(); ++it) {
		//cout << int(*it);
		//cout << " " << endl;
	}
	//cout << int(encoded_data.front());
	return encoded_data;
}

void decode2(vector<unsigned char> a, map<string, int> flipped_table) {
	vector <int> result;
	//	result.push_back(0);
	int last;
	last = a.back();
	string ascii = "";
	cout << "bits padded: " << last << endl;
	a.pop_back();
	for (vector<unsigned char>::iterator it = a.begin(); it != a.end(); ++it) {
		for (int i = 0; i < 8; i++) {
			if (it == --a.end())
			{
				if (i == (8 - last)) {
					break;
				}
			}
			int bit = (*it >> (7 - i));
			if (i == 0)
				cout << "BITCHHHHH " << bit << endl;
			ascii = ascii + char((bit & 0x01) + 48);

			if (flipped_table.find(ascii) != flipped_table.end()) {
				flipped_table[ascii];
				//cout << "!" << endl;
				cout << ascii << endl;
				result.push_back(flipped_table[ascii]);
				ascii = "";
			}
		}

	}
	for (vector<int>::iterator it = result.begin(); it != result.end(); ++it) {
		//cout << *it << endl;
		cout << char(*it) << endl;
	}
}

map<string, int> flip2() {
	map <string, int> flipped_table;
	for (map<int, string>::iterator it = huffmantable.begin(); it != huffmantable.end(); ++it)
		flipped_table[it->second] = it->first;
	for (map<string, int>::iterator it = flipped_table.begin(); it != flipped_table.end(); ++it)
		cout << it->first << "  " << it->second << '\n';
	return flipped_table;

}


int main(int argc, char** argv)
{
	int a;
	int b;
	int size = 0;
	vector< pair<char, int> > frequencies;

	while (!cin.eof()) {
		size++;
		cin >> a >> b;
		if (cin.eof()) break;
		frequencies.push_back(std::make_pair((char)a, b));
		//cout << a << "   " << b << endl;

	}
	for (int i = 0; i < 1; i++) {
		cout << "";
	}
	for (int i = 0; i < 1; i++) {
		cout << "";
	}

	HuffmanCodes(frequencies, size);
	for (map<int, string>::const_iterator colin = huffmantable.begin(); colin != huffmantable.end(); ++colin)
	{
		cout << colin->first << "     " << colin->second << "\n";
	}
	//map<string, int> flipped_table;
	//flipped_table = flip();
	//map<string, int> huffmantable;
	//vector <unsigned char> encoded_data = encode();
	//decode(encoded_data, flipped_table);
}
