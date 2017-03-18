#include <iostream>
#include <ctime>

using namespace std;

void ivedimas();
int skaicius = 0;
bool eiga = true;
int spejimas = 0;
int r;


int main(){
	srand(time(NULL));

	cout << "Sveiki. Pasirinkite skaiciu iki kokio norite zaisti: ";
	cin >> skaicius;
	r = rand() % skaicius + 1;
	system("cls");
	while(eiga == true){
		ivedimas();
	}
}

void ivedimas(){
	cout << "Spekite skaiciu: ";
	cin >> spejimas;
        if(spejimas > r){
		cout << "Skaicius per didelis" << endl;
		ivedimas();
        }else if(spejimas < r){
		cout << "Skacius per mazas" << endl;
		ivedimas();
	}else if(spejimas == r){
		eiga = false;
		cout << "Laimejai!" << endl;
	}
}
