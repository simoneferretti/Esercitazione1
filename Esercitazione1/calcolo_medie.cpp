#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char*argv[]) {
	if (argc>1){
		string filename =argv[1];
		ifstream ifs(filename);
		if (ifs.is_open()) {
			while(!ifs.eof()) {
				string luogo;
				double temp1, temp2, temp3, temp4;
				ifs >> luogo >> temp1 >> temp2 >> temp3 >> temp4;
				if (luogo == "") {
					break; // altrimenti stampa l'ultima media di nuovo
				}				
				double media = (temp1+temp2+temp3+temp4)/4;
				cout << luogo << " " << media <<"\n";
				}
		}
		else {
		cerr << "Errore nell'apertura del file " << filename << "\n";
		return 1;
		}
	}
	else {
		cerr << "Il parametro non è stato specificato\n";
		return 1;
		}
	return 0;
	}
			