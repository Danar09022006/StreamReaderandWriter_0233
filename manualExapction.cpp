#include <fstream>
using namespace std;

int main()
{
    try
    {
    cout << "Selamat Belajar di prodi TI UMY" << endl;
    throw("Hallo"); // melemparkan sebuah integer maka
    cout << "Pernyataan tidak akan dieksekusi" << endl;
    }
    catch (int a)
    {
    // blok ini akan dieksekusi
    cout << "Pengecualian akan dieksekusi" << endl;
    }
    catch (...)
    {
        // jika setelah integer maka blok ini akan diexsekusi
        cout << "Default pengecualian diexsekusi" << endl;
    }

    return 0;
}