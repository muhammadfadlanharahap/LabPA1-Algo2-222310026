#include <iostream>
using namespace std;

class contoh{
    private:
      int nilai;
    public:
    contoh (int n) {  //Constructor ini otomatis dilaksakan ketika sebuah objek dari class dibuat.
        nilai = n;
    }

    int getNum () {  //Getter pada class berguna untuk mengambil nilai pada class ke dalam fungsi main
        return nilai;
    }
};

int main(){
    contoh obj(10); //Memasukkan nilai 10 kedalam variable nilai dalam class contoh dengan nama object "obj"
    cout << "Nilai yang diinput : "<< obj.getNum() << endl; //Memanggil nilai pada class menggunakan get
    return 0;
}