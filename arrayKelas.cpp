#include <iostream>
using namespace std;

string kelas[30];
int pos = 0;
void inputData(string nama);
void outputData();

int main() {
    inputData("Muhammad Aqshal Habibi");
    outputData();
    inputData("Indomi goreng nyemek terbaik");
    outputData();
    inputData("Mi Ayam is life");
    outputData();
    inputData("Aku ingin minum matcha");
    outputData();
    return 0;
}

void inputData(string nama) {
    kelas[pos]=nama;
    pos++;
}

void outputData() {
    for (int i = 0; i < pos; i++)
    {
        cout << kelas[i];

        if (i < pos -1) {
            cout << ",";
        } else {
            cout << "." << endl;
        }
    }
    
}