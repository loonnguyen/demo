#include <iostream>

using namespace std;

struct SinhVien{
    int MSV;
    char hoten[100];
    float m1, m2, m3;
    SinhVien *Next;
};

typedef SinhVien* List;

void themTenDau(List &F, char x){
    List p = new(SinhVien);
    p->hoten = 'Luan';
    p->Next = F;
    F = p;
}

void themTenCuoi(List &F, char x){
    List p = new(SinhVien);
    p->hoten = 'Dung';
    p->Next = NULL;
    if(F == NULL){
        F = p;
    }else{
        List a = F;
        while(a->Next){
            a = a->Next;
        }
        a->Next = p;
    }
}

void xoaSinhVienDau(List &F){
    List p = F;
    F = F->Next;
    delete(p);
}



int main(){
    List F = NULL;
    char x;
    int choice;
    do{
        cout << "---MENU---"<< endl;
        cout << "1. Them ten vao dau danh sach." << endl;
        cout << "2. Them ten vao cuoi danh sach. " << endl;
        cout << "3. Xoa 1 SinhVien o dau danh sach." << endl;
        cout << "4. In ra thong tin SinhVien." << endl;
        cout << "0. Thoat." << endl;
        cout << "Nhap lua chon: "; cin >> choice;
        switch(choice){
            case 1:
                themTenDau(F, x);
                break;
            case 2:
                themTenCuoi(F, x);
                break;
            case 3:
                xoaSinhVienDau(F);
                break;
            case 4:

            case 0:
                cout << "Move B!tch." << endl;
                break;
            default:
                cout << "Co cc." << endl;
                break;
        }
    }while(choice != 0);
}
