#include <iostream>
#include <string>
using namespace std;
int main() {
system("chcp 1251>nul");

const char* text =
"Пели, пели пет петлета върху плета пет куплета"
"\nЛиса слушала зад плета и ги няма пет петлета.\n";
string patter{text};
string searchWord{ "пет" };
cout << "Скороговорка\n" << patter;
cout << "Tърсена дума " << searchWord << endl;
int pos = 0; //1
while (pos != string::npos) { //2
cout << "Стартова позиция за търсене: " << pos << endl;
pos = patter.find(searchWord, pos);
if (pos == string::npos) {
cout << searchWord << " не е намерено\n";
}
else {
cout<<searchWord <<" се съдържа в позиция "<< pos <<endl;
pos += searchWord.length(); //3
}
}
}
