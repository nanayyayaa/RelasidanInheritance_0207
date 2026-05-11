#ifndef IBU_H
#define IBU_H

class anak;

//membuat class ibu pada file header ibu.h
class ibu {
public:
    //deklarasi member variabel pada class ibu
    string nama;
    vector<anak*> daftar_anak;

    //membuat constructor dan destructor pada class ibu
    ibu(string pNama) :nama(pNama) {
        cout << "Ibu \"" << nama << "\" ada\n";
    };

    ~ibu() {
        cout << "Ibu \"" << nama << "\" tidak ada\n";
    };

    //deklarasi prosedur tambahAnak() dan cetakAnak()
    void tambahAnak(anak* pAnak);
    void cetakAnak();
};

//pendefinisian prosedur - prosedur pada class ibu diluar class
void ibu::tambahAnak(anak* pAnak) {
    daftar_anak.push_back(pAnak);
}