//StreamReaderandWriter




int main()
{
    string baris;

    ofstream outfile;

    outfile.open("Contohfile.txt");

    cout << ">= Menulis file, \'q\' intuk keluar" << endl;
    //unlimited loop untuk menulis
    while (true)
    {
        cout << "- ";
        //menempatkan setiap karakter dalam satu baris
        grtline(cin, baris);

        if (baris == "q")
            break;

        outfile << baris << endl;
    }
    outfile.close();
}