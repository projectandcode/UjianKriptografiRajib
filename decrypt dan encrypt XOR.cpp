
// algoritma sederhana enkripsi dan dekripsi dengan XOR 
#include <iostream>
using namespace std;

int main() {
	
    // Variabel untuk menyimpan plaintext
    string plaintext;
    cout << "Masukkan plaintext: ";
    
    // Mendapatkan input plaintext dari user
    getline(cin, plaintext);
    
    // Proses enkripsi XOR dengan kunci
    
    char key = 'A';
    for (int i = 0; i < plaintext.size(); i++) {
        plaintext[i] = plaintext[i] ^ key;
    }
    cout << "Hasil enkripsi: " << plaintext << endl;
    // Proses dekripsi XOR dengan kunci yang sama
    for (int i = 0; i < plaintext.size(); i++) {
        plaintext[i] = plaintext[i] ^ key;
    }
    cout << "Hasil dekripsi: " << plaintext << endl;
    return 0;
}
