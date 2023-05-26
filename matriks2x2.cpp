#include <iostream>
using namespace std;
 
int main()
{
    int matriksa[10][10], matriksb[10][10];
    int hasil[10][10];
    int x, y, z, c, d, sum = 0;

	cout << "\n\tTITIN LESTARI NINGSIH - 41521010083"<< endl << endl;     
    cout << " =======PROGRAM PERKALIAN MATRIKS=======" << endl << endl;
q:  cout << "   Matriks A : "; cin >> c;
    cout << "   Matriks B : "; cin >> d;
    cout << endl;
    cout << " =======================================";
    if (c!= d){
        cout << "\n\n Matriks Tidak Dapat Dikalikan. \n Silahkan Input Ulang\n\n";
        goto q;
    } else {
        cout << "\n\n Input Elemen Matriks A" << endl;
        for ( x = 1; x <= c; x++){
            for ( y = 1; y <= c; y++){
                cout << " Matriks A [" << x << "]["<< y <<"] : ";cin >> matriksa[x][y];
            }
        }
    cout << endl;
    cout << " =======================================";
        cout << "\n\n Input Elemen Matriks B" << endl;
        for ( x = 1; x <= d; x++){
            for ( y = 1; y <= d; y++){
                cout << " Matriks B [" << x <<"]["<< y <<"] : ";cin >> matriksb[x][y];
            }
        }
         
        for (x = 1; x <= c; x++){
            for (y = 1; y <= d; y++){
                for (z = 1; z <= d; z++){
                    sum = sum + matriksa[x][z] * matriksb[z][y];
                }
                hasil [x][y] = sum;
                sum  = 0;
            }
        }
    cout << endl;
    cout << " =======================================";
        cout << "\n\n Hasil Perkalian Matriks" << endl << endl;
        for (x = 1; x <= c; x++){
            for (y = 1; y <= c; y++){
                cout << "     " << hasil[x][y] << "\t"; 
            }
            cout << endl;
        }
    }
    return 0;
}
