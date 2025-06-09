

// untuk object exception yang akan kita gunakan
#include <array>
// untuk array yang akan kita gunakan
using namespace std;

int main()
{
    cout << "Awal Program" << endl; // penanda 1:..
    try
    {
        array<int, 3> data = (10, 20, 30);
        // pesan array 
        cout << data.at(4) << endl;
        // mengisi array elemen ke 2
    }
    catch (exception &e)
    { 
        // menangkap menggunakan object exception
        cout << e.what() << endl;
        // akan dieksekusi
    }
    cout << "Baris program yang terakhir" << endl;
    // penanda 2:.. bahwa program berjalan tanpa berhenti
    return 0;
}
