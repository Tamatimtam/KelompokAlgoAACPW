#include <iostream>
#include <string>
using namespace std;

const int N = 10; // number of journals

// function prototypes
void searchJournal(string journals[], string key);
bool getYesNo();

int main() {
    // list of journals
    string journals[N] = {"Journal1", "Journal2"};

    // ask for student NIM
    long nim;
    cout << "Enter student NIM: ";
    cin >> nim;
    cout << endl;

    // check if NIM is in the list
    bool found = false;
    long a[] = {2207421031,2207421032,2207421033,2207421034,2207421035,2207421036,2207421037,2207421038,
    2207421039,2207421040,2207421041,2207421042,2207421043,2207421044,2207421045,2207421046,2207421047,
    2207421048,2207421049,2207421050,2207421051,2207421052,2207421053,2207421054,2207421055,2207421056,
    2207421057,2207421058,2207421059};
    for (int i = 0; i < 29; i++) {
        if (nim == a[i]) {
            found = true;
            break;
        }
    }a

    if (found) {
        // search for journal
        bool done = false;
        while (!done) {
            cout << "Enter name of journal to search for: ";
            string key;
            cin >> key;
            cout << endl;

            searchJournal(journals, key);

            // ask if user wants to search for another journal
            cout << "Search for another journal? (y/n) ";
            done = !getYesNo();
            cout << endl;
        }

        cout << "TERIMAKASIH" << endl;
    }
    else {
        cout << "NIM tidak terdaftar." << endl;
    }

int main() {
	int a[] = {2207421031,2207421032,2207421033,2207421034,2207421035,2207421036,2207421037,2207421038,
	2207421039,2207421040,2207421041,2207421042,2207421043,2207421044,2207421045,2207421046,2207421047,
	2207421048,2207421049,2207421050,2207421051,2207421052,2207421053,2207421054,2207421055,2207421056,
	2207421057,2207421058,2207421059};
	int i=0, nim, ada;
	
	do {
		
    cout << " Masukkan NIM Anda: ";
    cin >> n;
    cout << endl;
			     
	while (i<29){
	    if (a[i] == nim){
		    ada++;
	    }
		i++;
	}
	
	} while (ada == 0);		
	return 0;
}

// searches for a journal with the given name in the given list of journals
// and outputs a message indicating whether the journal was found or not
void searchJournal(string journals[], string key) {
    bool found = false;
    for (int i = 0; i < N; i++) {
        if (journals[i] == key) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "JOURNAL TERSEDIA!" << endl;
    }
    else {
        cout << "JOURNAL TIDAK TERSEDIA." << endl;
    }
}

// get rid, put into main !!
bool getYesNo() {
    char c;
    cin >> c;
    return c == 'y';
}