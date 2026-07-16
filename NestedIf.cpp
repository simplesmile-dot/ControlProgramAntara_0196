#include <iostream>
using namespace std;


float Rata_rata(float a, float b) {
    return (a + b) / 2;
}

string Status_lulus(float r){
    if (r >= 60) 
    if (r >= 80) {
        return "Lulus Cumlaude";
    } 
    else {
        return " Lulus Baik";
    }
    else {
        return "Gagal";
    }
}

int main() {
    float nilaiBI, nilaiMT, rerata;
    string status;

    cout << "Masukkan nilai Bahasa Inggris : ";
    cin >> nilaiBI;
    cout << "Masukkan nilai Matematika : ";
    cin >> nilaiMT;

    //rerata = (nilaiBI + nilaiMT) / 2;
    //if (rerata >= 60) 
    //     status = "Lulus";
    //else
    // status = "Gagal";

    rerata = Rata_rata(nilaiBI, nilaiMT);
    //status = Status_lulus(rerata);

    cout << "Status Kelulusan = " << Status_lulus(rerata) << " ,dengan nilai rerata = " << rerata << endl;

}