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