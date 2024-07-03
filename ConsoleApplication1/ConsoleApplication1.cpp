#include <unordered_map>
#include <iostream>
#include <vector>
#include <utility>
#include <clocale>
using namespace std;
int ran1(vector <pair<string, vector<string>>> x) {
	int ran = rand() % x.size();
	return ran;
};


int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	srand(time(0));
	int mis = 0;
	string srart;
	string isov;
	vector<string> frt = {"Потомок волков", "Имеет четыре лапы", "Охраняет дом", ""};
	vector<string> firt = {"Имеет острые когти", "Много спит", "У нее 9 жизней", ""};
	vector<string> frot = {"Живет в Африке", "Царь зверей", "Про него сняли мультик", ""};
	pair<string, vector<string>> coup("dog", frt);
	pair<string, vector<string>> cop("cat", firt);
	pair<string, vector<string>> cup("lion", frot);


	bool start = true;
	vector <pair<string, vector<string>>> sql = {coup, cop, cup};
	vector <pair<string, vector<string>>> used;
	cout << "-------------------------------------------"<< endl;
	cout << "----------Добро пожаловать в игру----------"<< endl;
	cout << "-------------------------------------------"<< endl;
	cout << "Начнем: ";
	cin >> srart;
	if (srart != "start") {
		return 0;
	}
	while (start == true) {
		bool game = true;

			int ran = ran1(sql);
			pair <string, vector<string>> nef = sql[ran];
			
			
		     
			string gue;
			cout << "Первая подсказка: " << nef.second[0] << endl;
			while (game == true) {
			cin >> gue;
			if (gue == "finish") {
				return 0;
			}
			else if (gue != nef.first) {
				mis += 1;
				cout << "Следущая подсказка: " << nef.second[mis] << endl;
				
				if (mis == 3) {
					cout << "Вы проиграли"<< endl;
					game = false;
				}
				continue;
			} 
			
			if (gue == nef.first) {
				cout << "Молодец!" << endl;
				game = false;
			 }

		}
		cout << "Продолжим?" << endl;
		cin >> isov;
		if (isov == "yes") {
			start;
			mis = 0;
		}
		else {
			start = false;
		}
	}
}
