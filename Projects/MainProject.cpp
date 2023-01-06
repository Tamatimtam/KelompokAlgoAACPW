#include <iostream>
#include <string>
using namespace std;

const int N = 10; // number of books

// function prototypes
// searches for a Buku with the given name in the given list of Bukus
// and outputs a message indicating whether the Buku was found or not
void searchBuku(string Bukus[], string key) {
    bool found = false;
    for (int i = 0; i < N; i++) {
        if (Bukus[i] == key) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Buku TERSEDIA!" << endl;
    }
    else {
        cout << "Buku TIDAK TERSEDIA." << endl;
    }
}

// get rid, put into main !!
bool getYesNo() {
    char c;
    cin >> c;
    return c == 'y';
}

int main() {
    // list of Bukus
    string Bukus[N] = {"Harry Potter", "Game of Thrones","Kamus Oxford","C++ For Beginner","Guiness World Record","Laskar Pelangi","The Art Of War","Dunia Shofie","Supernova","Atlas Dunia"};

    // ask for student NIM
    string nim;
    cout << "Enter student NIM: ";
    cin >> nim;
    cout << endl;

    // check if NIM is in the list
    bool found = false;
    string a[] = {"2207421031","2207421032","2207421033","2207421034","2207421035","2207421036","2207421037","2207421038",
    "2207421039","2207421040","2207421041","2207421042","2207421043","2207421044","2207421045","2207421046","2207421047",
    "2207421048","2207421049","2207421050","2207421051","2207421052","2207421053","2207421054","2207421055","2207421056",
    "2207421057","2207421058","2207421059"};
    for (int i = 0; i < 29; i++) {
        if (nim == a[i]) {
            found = true;
            break;
        }
    }

    if (found) {
        // search for Buku
        bool done = false;
        while (!done) {
            cout << "Enter name of Buku to search for: ";
            string key;
            cin.ignore();
            getline(cin,key);
            cout << endl;

            searchBuku(Bukus, key);

            // ask if user wants to search for another Buku
            cout << "Search for another Buku? (y/n) ";
            done = !getYesNo();
            cout << endl;
        }

        cout << "TERIMAKASIH" << endl;
    }
    else {
        cout << "NIM tidak terdaftar." << endl;
    }
}


