#include<iostream> // Include standard input/output library
#include<fstream> // Include file stream library for file operations
#include<string> // Include string library for using string variables
using namespace std;

int main ()
{
    string baris;
    string namafile;

    cout << "Masukkan Nama File: ";
    cin >> namafile;

    // Membuka file untuk menulis
    ofstream outfile;
    outfile.open(namafile + ".txt", ios::out); // Open a file with given name + .txt for writing

    cout << ">= Menulis file, 'q' untuk keluar" << endl;

    // flush newline character after cin
    cin.ignore(); // Remove leftover newline character from input buffer

    while(true){
        cout << "- ";
         getline(cin, baris); // Read a full line of text from the user

        if (baris == "q")
            break;
            outfile << baris << endl; // Write the line to the file
    }
     outfile.close(); // optional but good practice // Close the output file after writing

    return 0;
}
