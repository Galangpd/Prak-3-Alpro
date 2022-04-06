using namespace std;

class Proses {
    public:
        void cetak(){
            cout<<"Anda sebagai proses \n";
        }
        void getData(){
            ambil_data.open("api_data.txt");
            bool ayam_geprek=true;
            bool ayam_goreng=true;
            bool udang_goreng=true;
            bool cumi_goreng=true;
            bool ayam_bakar=true;
            while(!ambil_data.eof()){
                if(ayam_geprek){
                    ambil_data >> bnyk_aymGp;
                    ayam_geprek=false;
                }
                else if(ayam_goreng){
                    ambil_data>>bnyk_aymGr;
	            	ayam_goreng=false;    
				}
                else if(udang_goreng){
                    ambil_data>>bnyk_udnGr;
                    udang_goreng=false;
                }
                else if(cumi_goreng){
                    ambil_data>>bnyk_cmiGr;
                    cumi_goreng=false;
                }
                else if(ayam_bakar){
                    ambil_data>>bnyk_aymBk;
                    ayam_bakar=false;
                }
                else{
                    ambil_data>>jarak_rumah;
                }
            } 
            ambil_data.close();
        }
        void toFile(){
            int total=(hrg_aymGp*bnyk_aymGp) + (hrg_aymGr*bnyk_aymGr) + (hrg_udnGr*bnyk_udnGr) + (hrg_cmiGr*bnyk_cmiGr) + (hrg_aymBk*bnyk_aymBk);
            int ongkir, ongkir2;
            int hasil;
            float t2 = float(total);
            float diskon; 
            
            if(jarak_rumah<3){
                ongkir=15000;}
            if(jarak_rumah>=3){
                ongkir=25000;}
            if(total < 25000){
                diskon = 0;
                ongkir2 = ongkir-0;}
            if(total > 25000){
                ongkir2 = ongkir-3000;}
            if(total > 50000){
                diskon = total * 0.15;
                ongkir2 = ongkir-5000;
                t2 = total - diskon;}
            if(total > 150000){
                diskon = total * 0.35;
                ongkir2 = ongkir-8000;
                t2 = total - diskon;}

            hasil=t2+ongkir2;

            tulis_data.open("api_data.txt");
            tulis_data << total  <<endl;
            tulis_data << diskon <<endl;
            tulis_data << t2 <<endl;
            tulis_data << ongkir <<endl;
            tulis_data << ongkir2 <<endl;
            tulis_data << hasil <<endl;
            tulis_data << bnyk_aymGp <<endl;
            tulis_data << bnyk_aymGr <<endl;
            tulis_data << bnyk_udnGr <<endl;
            tulis_data << bnyk_cmiGr <<endl;
            tulis_data << bnyk_aymBk <<endl;
            tulis_data << jarak_rumah <<"km";
            tulis_data.close();
        }

    private:
        ifstream ambil_data;
        ofstream tulis_data;
        int bnyk_aymGp;
        int bnyk_aymGr;
        int bnyk_udnGr;
        int bnyk_cmiGr;
        int bnyk_aymBk;
        int jarak_rumah;
        int hrg_aymGp = 21000;
        int hrg_aymGr = 17000;
        int hrg_udnGr = 19000;
        int hrg_cmiGr = 20000;
        int hrg_aymBk = 25000;
};
