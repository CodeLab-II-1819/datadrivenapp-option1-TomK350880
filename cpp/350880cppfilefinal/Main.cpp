#include <iostream>
#include <fstream>
#include <string>

using namespace std;


//function prototype
void SearchFunction();

//global variable
ifstream file("sampleTweets.csv");


int main() {

	//could use structures but don't seem necessary

	if (!file.is_open()) cout << "error finding file" << endl;

	while (1 < 2) {
		SearchFunction();
	}
	
	file.close();
	system("pause");
	return 0;

}

void SearchFunction() {

	int menu, found;
	string search, Line, searchCap;

	cout << "press 1 for all tweets, 2 for 'money', 3 for 'politics', 4 for 'Paris', 5 for 'Dreamworks', 6 for 'Uber', 7 for 'cat', 8 for 'Twitter', 9 for 'dog', or 10 for a custom search" << endl;
	cin >> menu;

	switch (menu) {
	case 1:
		search = "b";
		break;
	case 2:
		search = "money";
		searchCap = "Money";
		break;
	case 3:
		search = "politics";
		searchCap = "Politics";
		break;
	case 4:
		search = "paris";
		searchCap = "Paris";
		break;
	case 5:
		search = "dreamworks";
		searchCap = "Dreamworks";
		break;
	case 6:
		search = "uber";
		searchCap = "Uber";
		break;
	case 7:
		search = "cat";
		searchCap = "Cat";
		break;
	case 8:
		search = "twitter";
		searchCap = "Twitter";
		break;
	case 9:
		search = "dog";
		searchCap = "Dog";
		break;
	case 10:
		cout << "input word :";
		cin >> search;
		searchCap = "***!£$%^&?***";
		break;
	default:
		cout << "invalid input";
		break;
	}

	cout << "wait a second while I load in tweets" << endl;

	
	if (file.is_open())
	{
		//this is the part which goes through line by line, counting number of tweets as well as printing the ones with the searched word
		found = 0;
		while (getline(file, Line)) {
			if (Line.find(search) != string::npos) {
				cout << Line << endl;
				++found;
			}
			else if (Line.find(searchCap) != string::npos) {
				cout << Line << endl;
				++found;
			}
		}
		cout << endl << found << " total searches were found for " << search << endl << endl;
		//resets so we start at top of list again
		file.clear();
		file.seekg(0, ios::beg);
	}
}