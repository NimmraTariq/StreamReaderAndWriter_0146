#include<iostream> // Include standard input/output stream library
using namespace std;

int main ()
{
    try {
         cout << "Selamat belajar di prodi TI UMY" << endl; // Display welcome message
         throw ("Hello"); // Throw a string exception

        cout << " Pernyatan tidak akan dieksekusi" << endl;
    }
    catch (int a) {
        // blak ini akan dieksekusi
        cout << "Pernyataan akan dieksekusi" << endl;
}
    catch (...){
        //jika selain integer maka blok ini akan dieksekusi