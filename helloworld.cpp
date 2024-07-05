#include <iostream>

using namespace std;

struct SinhVien {
        int msv;
        char HoVaTen[100];
        float Toan, Van, Anh;
        float XepLoai[10];
};

void nhapMang(SinhVien A[], int &n){
    cout << "Nhap N: "; cin >> n;
    for(int i = 0; i < n; i++){
        cout << "MSV: ";
        cin >> A[i].msv;
        fflush(stdin);
        cout << "HVT: ";
        cin.getline(A[i].HoVaTen, 100);
        cout << "TOAN - VAN - ANH: ";
        cin >> A[i].Toan >> A[i].Van >> A[i].Anh;
    }
}

void xuatMang(SinhVien A[], int n){
    cout << "\n\t\tDanh Sach: ";
    for(int i = 0; i < n; i++){
        cout << "\nMSV: " << A[i].msv << " HoTen: " << A[i].HoVaTen;
        cout << "\nDiem Trung Binh 3 mon: " << (A[i].Toan + A[i].Van + A[i].Anh) / 3;
    }
}

void sapXep(SinhVien A[], int n){
    for(int i = 0; i < n; i++){
        if(A[i].Toan + A[i].Van + A[i].Anh >= 8.5){
            cout << A[i].HoVaTen << " : A\n";
        }else if(A[i].Toan + A[i].Van + A[i].Anh < 8.5 && A[i].Toan + A[i].Van + A[i].Anh >= 7){
            cout << A[i].HoVaTen << " : B\n";
        }else if(A[i].Toan + A[i].Van + A[i].Anh < 7 && A[i].Toan + A[i].Van + A[i].Anh >= 5.5){
            cout << A[i].HoVaTen << " : C\n";
        }else if(A[i].Toan + A[i].Van + A[i].Anh < 5.5 && A[i].Toan + A[i].Van + A[i].Anh >= 4.9){
            cout << A[i].HoVaTen << " : D\n";
        }else{
            cout << A[i].HoVaTen << " : F\n";
        }
    }
}

int main(){

    SinhVien A[10];
    int n;
    nhapMang(A, n);
    xuatMang(A, n);
    cout << endl;
    sapXep(A, n);

}