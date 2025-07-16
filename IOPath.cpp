#include <iostream> //Include standard input/output library
#include <fstream> // Include file stream library
#include <string> // Include string handling library

using namespace std;

int main (){
    string baris;

    //membuat obyek output file stream dalam mode menulis
    ofstream outfile; // Create output file stream object
    
    //membuka file
    outfile.open("contohfile.txt"); // Open file for writing

    cout<< ">= Menulis file, \'q\' untuk keluar" << endl;

    //unlimited loop untuk menulis

    while (true){
    cout << "-";
    //mendapatkan setiap charackter dalam  satu baris
     getline(cin, baris); // Get a full line of input from user

    //loop akan berhenti jika anda memasukkan character q

    if (baris== "q")
        break;

    //menulisdan memasukkan nilai dari baris ke dalam file 
    outfile<<baris<<endl; // Write line to the file
    outfile.close(); // Close the output file

//membuat obyek input file stream dalam mode membaca
ifstream infile; // Create input file stream object

//membuka file
infile.open("contohfile.txt");

cout << endl
<<">= Membuka dan membaca file"<<endl;

// jika file add maka
if(
    infile.is_open())
    {
        //melakukan perulagan setiap baris
        while (getline(infile, baris))
        {
            //dan tampilkan di sini
}