#include<iostream>
#include<exception>
#include<array>

using namespace std;

int main (){
    cout << "Awal Program" << endl;
    try {
        array <int, 3> data = {10, 20, 30}; // Declare a fixed-size array with 3 integers
       //pesan array integer 3 elemen 
       cout << data.at(4) << endl; // Attempt to access an out-of-range index
}
      
 catch (exception &e)
 {
    cout << e.what () << endl; // Handle and display the standard exception message

 }
 cout << "baris program yang terakir" << endl;

 return 0;
}