#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

const int N = 50; // number of books

// function prototypes
// searches for a Buku with the given name in the given list of books
// and outputs a message indicating whether the book was found or not
void searchBuku(string Bukus[], string key) {
    
    //!!!WIP BELOM MASUK FLOWCHART!!! -Pratama
    
    // convert the key to lowercase
    std::transform(key.begin(), key.end(), key.begin(), ::tolower);
    // convert all of the book names in the array to lowercase
    for (int i = 0; i < N; i++) {
        std::transform(Bukus[i].begin(), Bukus[i].end(), Bukus[i].begin(), ::tolower);
    }
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

// get rid, put into main !! -Pratama
bool getYesNo() {
    char c;
    cin >> c;
    return c == 'y';
}

int main() {
    // list of Bukus -Christian
    string Bukus[N] = {
	"5 cm","A Study in Scarlet", "Alice in Wonderland", "Atlas Dunia", "Atlas Indonesia", "Atomic Habits", "Bumi", "Bumi Manusia", "C++ For Beginner", 
	"Chronicles of Narnia","Death on the Nile","Dunia Shofie", "Game of Thrones", "Girl Who Kicked the Hornets' Nest", "Girl with the Dragon Tattoo", "Great Gatsby", "Guiness World Record", 
	"Harry Potter", "Habibie Ainun", "Help", "Hunger Games", "Hujan", "Kamus Oxford", "Kite Runner", "Laskar Pelangi","Murder on The Orient Express",
	"Laskar Pelangi", "Lord of the Flies", "Lord of the Rings", "Negeri 5 Menara", "Negeri di Ujung Tanduk", 
	"Negeri Para Bedebah","Perahu Kertas","Percy Jackson and the Olympians", "Pergi", "Pulang", "Pride and Prejudice", "Ready Player One", 
	"Robohnya Surau Kami","Sang Pemimpi", "Sapiens", "Selection", "Sherlock Holmes", "Supernova","The Hound of the Baskervilles",
	"The Memoirs of Sherlock Holmes","The Shawsank Redemption","Think and Grow Rich", "To Kill a Mockingbird", "Twilight"};

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
    //!!!WIP BELOM MASUK FLOWCHART!!! -Pratama
  string names[] = {"Muhammad Khoiru Mufid","Kevin Alonzo Manuel Bakara","Devina Anggraini","Alif Rendina Pamungkas","Ibrahim Alvaro",
  "M. Berryl Muchtada","Reishafa Armelia Armando","Rafi Rasya Husein Panjaitan","Muhammad Abian Abdi Pratama","Pratama Varian Andika Parulian",
  "Alfarizki Nurachman","Azzuri Putra Mahendra","Christian Nataniel Yosua Purba","Maria Intan Pretty Stefani","Muhammad Abdur Rochman","Itsar Hevara",
  "Abdurrahman Ammar Ihsan","Wahyu Priambodo","Salsabilla Aulia","Izzaturachmi","Jonathan Victorian Wijaya","Fachrul Rosi","Rizki Alfarisi","Theo Dhiya Pratama",
  "Muhammad Haikal Fadhillah","Muhammad Brian Azura Nixon","Shaquille Ariza Hidayat","Safina Ayu Rasya","Cornelius Yuli Rosdianto"};



    for (int i = 0; i < 29; i++) {
    if (nim == a[i]) {
        found = true;
        cout << "Welcome " << names[i] << "!" << endl;
        break;
    }
}

    if (found) {
        int choice;
        cout << "Enter 1 to search for a book, or 2 to list all books: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
            case 1: {
                // search for Buku
                bool done = false;
                while (!done) {
                	system("cls");
                    cout << "Enter name of book to search for: ";
                    string key;
                    cin.ignore();
                    getline(cin,key);
                    cout << endl;

                    searchBuku(Bukus, key);
                    
                    // ask if user wants to search for another Buku
                    cout << "Search for another book? (y/n) ";
                    done = !getYesNo();
                    cout << endl;
                }
                break;
            }
            case 2: {
            	//option 2: list all available books -Christian
                bool done = false;
                while (!done){
                
                int num;
                system("cls");
                for (int i = 0; i < N; i++) {
                    cout << i+1 <<"."<< Bukus[i] << endl;
                }
    
                cout << "Enter the number of the book you want: " << endl;
                cin >> num;
                if (num<=N){
				
                cout << Bukus[num-1]<<" TERSEDIA!" << endl;
            	}
            	else{
            	cout << "Maaf Nomor Tidak Valid!\n";
				}
                // ask if user wants to search for another book
                    cout << "Search for another book? (y/n) ";
                    done = !getYesNo();
                    cout << endl;
                }
                break;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
        cout << "TERIMAKASIH" << endl;
    } else {
        cout << "NIM tidak terdaftar." << endl;
    }
}
