//StreamReaderandWriter
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;
    // membuat object 
    ofstream outfile;
    outfile.open("Contohfile.txt");
    cout << ">= Menulis file, \'q\' intuk keluar" << endl;

    //unlimited loop untuk menulis
    while (true)
    {
        cout << "- ";
        //menempatkan setiap karakter dalam satu baris
        getline(cin, baris);
        if (baris == "q")
        break;
        //menulis dan memasukkan nilai dari "baris" ke dalam file
        outfile << baris << endl;
    }
    // selesai dalam menulis sekaraang tutup filenya
    outfile.close();

    // membuat object input file stream dalam mode membaaca
    ifstream infile;
    // membuka file
    

    
    cout << ">= Membuka dan membaca file " << endl;
    // jika file ada maka
    if (infile.is_open())
    {
        // melakukkan perulangan seitiap baris
        while (getline(infile, baris))
        {
            // dan tampilkan disini
            cout << baris << '\n';
        }
        // tutup file setelah selesai
        infile.close();
    }
    // jika file tidak ada   
    else
        cout << "Unable to open file";
    
}