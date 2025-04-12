#include <iostream>
using namespace std;

string kelas[30];
int pos = 0;
void inputData(string nama);
void outputData();

int main() {
    inputData("Syarifah Najwa");
    outputData();
    
    inputData("Indomi goreng plus telor"); // pemanggilan procedure
   outputData();
   inputData("Ayam Bacem Sambal mata"); // pemanggilan procedure
   outputData();
   inputData("Lontong Sayur Lauk Haruan"); // pemanggilan procedure
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
