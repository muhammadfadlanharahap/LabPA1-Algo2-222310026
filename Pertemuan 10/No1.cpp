#include<iostream>
#include<string>

using namespace std;

class Buku{
    private:
    string buku_1;
    string buku_2;

    public:
    void setBuku_1(string n){
        buku_1 = n;
    }

    void setBuku_2(string j){
        buku_2 = j;
    }

string getBuku1(){
    return buku_1;  
}

string getBuku2(){
    return buku_2;
}
};

int main(){
    Buku buku;
    buku.setBuku_1("Java Script Coding Book");
    buku.setBuku_2("Java Coding Book");

    cout << "Buku yang dikembalikan : " << buku.getBuku1() << endl;
    cout << "Buku yang dipinjam     : " << buku.getBuku2() << endl;
    return 0;
}