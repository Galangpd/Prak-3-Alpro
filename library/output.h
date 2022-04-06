using namespace std;

class Output {
    public:
        void cetak(){
            cout<<"STRUK PEMBELIAN \n";
            cout<<"Yang dibeli              : \n";
            cout<<"Ayam Geprek              : " <<data_file[6] <<endl;
            cout<<"Ayam Goreng              : " <<data_file[7] <<endl;
            cout<<"Udang Goreng             : " <<data_file[8] <<endl;
            cout<<"Cumi goreng              : " <<data_file[9] <<endl;
            cout<<"Ayam bakar               : " <<data_file[10] <<endl;
            cout<<"Jarak rumah              : " <<data_file[11] <<endl;
            cout<<"Harga total              : Rp" <<data_file[0] <<endl;
            cout<<"Diskon                   : Rp" <<data_file[1] <<endl;
            cout<<"Harga setelah diskon     : Rp" <<data_file[2] <<endl;
            cout<<"Ongkir                   : Rp" <<data_file[3] <<endl;
            cout<<"Ongkir setelah potongan  : Rp" <<data_file[4] <<endl;
            cout<<"Harga bayar              : Rp" <<data_file[5] <<endl;
        }
        void getData(){
            ambil_data.open("api_data.txt");
            string t;
            while(!ambil_data.eof()){
                ambil_data >> data_file[index];
                index += 1;
            }
            ambil_data.close();
        }
    private:
        ifstream ambil_data;
        string data_file[30];
        int index=0;

};
