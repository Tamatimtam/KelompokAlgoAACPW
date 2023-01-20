#include <iostream>
#include <string>
#include <algorithm> //used for transform at line 21
#include <cstdlib>
#include <iomanip>

using namespace std;

int book_key;
const int N = 50; // number of books

void testfunction(){
    cout << "Test";
}

// function prototypes
// searches for a Buku with the given name in the given list of books
// and outputs a message indicating whether the book was found or not
// By pratama
void searchBuku(string Bukus[], string key) {
        bool found = false;
    // convert the key to lowercase using std::transform and ::tolower
    std::transform(key.begin(), key.end(), key.begin(), ::tolower);
    // convert all of the book names in the array to lowercase 
    for (int i = 0; i < N; i++) {
        std::transform(Bukus[i].begin(), Bukus[i].end(), Bukus[i].begin(), ::tolower);
    }//to-lowercase function by Pratama


    //linear search contributed by Azzuri
    //loop through all books within database, t o see if it matches the key -azzuri
    for (int i = 0; i < N; i++) {
        if (Bukus[i] == key) {
            found = true;
            book_key = i;
            break;
        }
    }
  
    //if found, declare that the book title is available -azzuri
    if (found) {
        cout << "--------------------------\n"; // Wahyu
         cout << "=== [ " << Bukus[book_key]<<" IS AVAILABLE! ] ===\n\n";
        cout << "--------------------------\n\n"; // Wahyu
    }
    //if not found, declare that the book title is not available -azzuri
    else {
        cout << "------------------------------\n";
        cout << "[ THE BOOK IS NOT AVAILABLE! ]\n";
        cout << "------------------------------\n\n";
    }
}

// reusable function to get yes/no input from user -pratama
bool getYesNo() {
    char c;
    cin >> c;
    return c == 'y';
}

int main() {
    // list array of Books -Christian
    string Bukus[N] = {
    "5 cm","A Study in Scarlet", "Alice in Wonderland", "Atlas Dunia", "Atlas Indonesia", "Atomic Habits", "Bumi", "Bumi Manusia", "C++ For Beginner", 
    "Chronicles of Narnia","Death on the Nile","Dunia Shofie", "Game of Thrones", "Girl Who Kicked the Hornets' Nest", "Girl with the Dragon Tattoo", "Great Gatsby", "Guiness World Record", 
    "Harry Potter", "Habibie Ainun", "Help", "Hunger Games", "Hujan", "Kamus Oxford", "Kite Runner", "Laskar Pelangi","Murder on The Orient Express",
    "Laskar Pelangi", "Lord of the Flies", "Lord of the Rings", "Negeri 5 Menara", "Negeri di Ujung Tanduk", 
    "Negeri Para Bedebah","Perahu Kertas","Percy Jackson and the Olympians", "Pergi", "Pulang", "Pride and Prejudice", "Ready Player One", 
    "Robohnya Surau Kami","Sang Pemimpi", "Sapiens", "Selection", "Sherlock Holmes", "Supernova","The Hound of the Baskervilles",
    "The Memoirs of Sherlock Holmes","The Shawsank Redemption","Think and Grow Rich", "To Kill a Mockingbird", "Twilight"};
    
     // list array of NIMs and Names -azzuri
    
    string a[] = {"2207421031","2207421032","2207421033","2207421034","2207421035","2207421036","2207421037","2207421038",
    "2207421039","2207421040","2207421041","2207421042","2207421043","2207421044","2207421045","2207421046","2207421047",
    "2207421048","2207421049","2207421050","2207421051","2207421052","2207421053","2207421054","2207421055","2207421056",
    "2207421057","2207421058","2207421059"};
    

  string names[] = {"Muhammad Khoiru Mufid","Kevin Alonzo Manuel Bakara","Devina Anggraini","Alif Rendina Pamungkas","Ibrahim Alvaro",
  "M. Berryl Muchtada","Reishafa Armelia Armando","Rafi Rasya Husein Panjaitan","Muhammad Abian Abdi Pratama","Pratama Varian Andika Parulian",
  "Alfarizki Nurachman","Azzuri Putra Mahendra","Christian Nataniel Yosua Purba","Maria Intan Pretty Stefani","Muhammad Abdur Rochman","Itsar Hevara",
  "Abdurrahman Ammar Ihsan","Wahyu Priambodo","Salsabilla Aulia","Izzaturachmi","Jonathan Victorian Wijaya","Fachrul Rosi","Rizki Alfarisi","Theo Dhiya Pratama",
  "Muhammad Haikal Fadhillah","Muhammad Brian Azura Nixon","Shaquille Ariza Hidayat","Safina Ayu Rasya","Cornelius Yuli Rosdianto"};
   //list of names  -Azzuri

    // Opening Banner - Wahyu
    cout << "====================================================================================\n";
    cout << "| <<<<<<<<<<<<<<<<<<<<<<<<<<< WELCOME TO BukuKita APP >>>>>>>>>>>>>>>>>>>>>>>>>>>> |\n";
    cout << "====================================================================================\n";
    cout << "| Bingung mau cari buku apa? Cari di BukuKita aja, dijamin lengkap dan berkualitas |\n";
    cout << "====================================================================================\n\n";

    // ask for student NIM -azzuri
    string nim;
    cout << "[Login] Enter student NIM: ";
    cin >> nim;
    bool found = false;
    
   

    //loop through nim input and see if nim is in the list -pratama
    for (int i = 0; i < 29; i++) {
        //if nim is in the list, print welcome message and say the name of the student -pratama
       if (nim == a[i]) {
            found = true;
            cout << "..............[SUCCESS]..............\n\n";
            cout << "=== [ Welcome " << names[i] << "! ] ===\n\n";
            break;
        }
    }

    //if nim is found, give choice to either search for a book, or list all books within database. -Pratama
    if (found) {
        int choice;
        cout << "[Input] Enter (1) to search for a book, or (2) to list all books: ";
        cin >> choice;
        cout << endl;

        //switch to choose between search and list -Christian
        switch (choice) {
            case 1: {
                // search for Buku
                bool done = false;
                while (!done) {
                    //prompt user to enter the name of the book they'd like to search for - wahyu
                    system("cls||clear");
                    cout << "[Input] Enter name of book to search for: ";
                    string key;
                    cin.ignore(); //supaya bisa input dengan sepasi -christian
                    getline(cin,key);
                    cout << endl;

                    searchBuku(Bukus, key); //pratama
                    
                    // ask if user wants to search for another Book -wahyu
                    cout << "[Confirm] Search for another book? (y/n): ";
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
                system("cls||clear"); //clear screen for legibility -wahyu
                
                // book list interface -Wahyu
                cout << "+-----------------------------------------+\n";
                cout << "| >>>>>>>>>>>>> BOOK LIST <<<<<<<<<<<<<<< |\n";
                cout << "+-----------------------------------------+\n";
                
                //for loop to display all books within database -wahyu
                for (int i = 0; i < N; i++) {
                    if(i<9)
                        cout << "| " << i+1 <<". ) "<< left << setw(35) << Bukus[i] << "|\n"; // add space
                    else
                        cout << "| " << i+1 <<".) "<< left << setw(35) << Bukus[i] << "|\n";
                }
                cout << "+-----------------------------------------+\n";
                
                //prompt user for the number of the book they want -wahyu
                cout << "[Input] Enter the number of the book you want: ";
                cin >> num;
                cout << "\n";
                
                //if the number provided is valid, declare status of book (available/not available) -wahyu
                if (num<=N){
                    cout << "=== [ " << Bukus[num-1]<<" IS AVAILABLE! ] ===\n\n";
                }
                else{
                    cout << "[Error] Invalid numbers input!\n\n";
                }
                // ask if user wants to search for another book -pratama
                    cout << "[Confirm] Search for another book? (y/n): ";
                    done = !getYesNo();
                    cout << endl;
                }
                break;
            }
            //default to mitigate invalid inputs - wahyu
            default: {
                cout << "[Error] Invalid choice. Please try again.\n";
                break;
            }
        }
        cout << "-------------\n";
        cout << "[ THANK YOU ]\n";
        cout << "-------------\n";

       
    } 
    
     //if nim is not in list, print unregistered message -pratama
    else {
        cout << "...........[FAILED]............\n\n";
        cout << "[ YOUR NIM IS NOT REGISTERED! ]\n";
    }

    return 0;
}