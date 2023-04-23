#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int hb[11][11];

void init(string s) {
	int i = 0;
	int sor = 0, oszlop = 0;
	while (i < s.length() - 1) {

		switch (s[i]) {

		case 'A': sor = 1; break;
		case 'B': sor = 2; break;
		case 'C': sor = 3; break;
		case 'D': sor = 4; break;
		case 'E': sor = 5; break;
		case 'F': sor = 6; break;
		case 'G': sor = 7; break;
		case 'H': sor = 8; break;
		case 'I': sor = 9; break;
		case 'J': sor = 10; break;
		}

		if (i + 2 < s.length() && int(s[i + 2] == 48)) {
			oszlop = 10;
			i += 3;
		}
		else {
			oszlop = int(s[i + 1]) - 48;
			i += 2;
		}

		hb[sor][oszlop] = 1;

	}
}

void are_ships_destroyed(string s) {
	int i = 0;
	int sor = 0, oszlop = 0;
	while (i < s.length() - 1) {

		switch (s[i]) {

		case 'A': sor = 1; break;
		case 'B': sor = 2; break;
		case 'C': sor = 3; break;
		case 'D': sor = 4; break;
		case 'E': sor = 5; break;
		case 'F': sor = 6; break;
		case 'G': sor = 7; break;
		case 'H': sor = 8; break;
		case 'I': sor = 9; break;
		case 'J': sor = 10; break;
		}

		if (i + 2 < s.length() && int(s[i + 2] == 48)) {
			oszlop = 10;
			i += 3;
		}
		else {
			oszlop = int(s[i + 1]) - 48;
			i += 2;
		}

		if (hb[sor][oszlop] == 1) hb[sor][oszlop] = 3;
		else hb[sor][oszlop] = 2;

	}
}

void print() {

	int i = 0, j = 0;
	for (i = 1; i <= 10; i++) {
	for (j = 1; j <= 10; j++)
	{
		if (hb[i][j] == 2) cout << '*' << " ";
		else if (hb[i][j] == 1) cout << 'X' << " ";
		else if (hb[i][j] == 3) cout << 'O' << " ";
		else cout << '.' << " ";

	}
	cout << endl;
	}

	cout << "\nA * jeloli azt a helyet melyre bomba kerult de nem volt hajo\n";
	cout << "Az X jeloli azt a helyet ahol hajo darab van es bomba nem talalta el\n";
	cout << "Az O jeloli azt a helyet ahol a bomba hajot talalt\nMinden mas helyen . van\n";
}

string beh, beb;

int main() {
	
	cout << "Add meg a hajok pozicojat, A1B3.. formaban:\n";
	cin >> beh;
	init(beh);
    cout<<endl;
    
	cout << "Add meg a bombak lehelyezesi poziciojat, A1B3.. formaban:\n";
	cin >> beb;
	are_ships_destroyed(beb);
	cout<<endl;

	print();

	return 0;


}
