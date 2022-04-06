using namespace std;

class Input {
    public:
        void cetak(){
            cout << "Aplikasi Penjualan Ayam \n";
            cout << "Menu yang tersedia : \n";
            cout << "1) Ayam Geprek Rp21.000 \n";
            cout << "2) Ayam Goreng Rp17.000 \n";
            cout << "3) Udang Goreng Rp19.000 \n";
            cout << "4) Cumi Goreng Rp20.000 \n";
            cout << "5) Ayam Bakar Rp25.000 \n";
            cout << "pesan ayam geprek  : "; cin >> bnyk_aymGp;
            cout << "pesan ayam goreng  : "; cin >> bnyk_aymGr;
            cout << "pesan udang goreng : "; cin >> bnyk_udnGr;
            cout << "pesan cumi goreng  : "; cin >> bnyk_cmiGr;
            cout << "pesan ayam bakar   : "; cin >> bnyk_aymBk;
            cout << "jarak rumah        : "; cin >> jarak_rumah;
        }
        void toFile(){
            tulis_data.open("api_data.txt");
            tulis_data << bnyk_aymGp <<endl;
            tulis_data << bnyk_aymGr <<endl;
            tulis_data << bnyk_udnGr <<endl;
            tulis_data << bnyk_cmiGr <<endl;
            tulis_data << bnyk_aymBk <<endl;
            tulis_data << jarak_rumah;
            
            tulis_data.close();
        }

    private:
        ofstream tulis_data;
        int bnyk_aymGp, bnyk_aymGr, bnyk_udnGr, bnyk_cmiGr, bnyk_aymBk, jarak_rumah;
};
