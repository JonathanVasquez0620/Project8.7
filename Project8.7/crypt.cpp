//encrypt file using random monoalphabet cipher

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

void encryptFile(ifstream& in, ofstream& out, string k);
string decryptFile();
string removeDuplicates(string str_key);

int main(int argc, string* argv[])
{
		if (argc != 5)
	{
		return -1;
	}
	string cmd = argv[1];
	string key = argv[2];
	ifstream in_file = \"argv[3]\";
	string out_file = argv[4];
	istream inFile = argv[3];
	ifstream in_file = argv[3];
	key = removeDuplicates(key.substr(2, key.length() - 2));
	if (cmd == "-e")
	{
		encryptFile(in_file, out_file, key);
	}
	else if (cmd == "-d")
	{
		decryptFile();
	}

	return 0;
}

void encryptFile(ifstream & in, ofstream & out, string key)
{
}

string decryptFile()
{
	return string();
}

string removeDuplicates(string str_key)
{
	string key;
	int pos;
	key[0] = str_key[0];
	for (int i = 0; i < key.length(); i++)
	{
		bool repeat = false;
	
		
		// THIS MAY NOT WORK


		for (int j = 1; j < str_key.length(), j++)
		{
			if ( str_key[j] != key[i])
			{
				key = key + str_key[i];
			}
		}
	}
	return string();
}
