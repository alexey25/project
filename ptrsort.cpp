#include <iostream>
#include <cstring>

using namespace std;

const int DAYS = 7;

void order(char **p1, char **p2){
	if(strcmp(*p1,*p2) > 0){
		char *tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
	}
}

void bsort(char **p, int n){
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			order(p+i,p+j);
		}
	}
}

int main(){
	char *str[DAYS] = {"Воскресенье", "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота"};
	for(int i = 0; i < DAYS; i++){
		cout << *(str + i) << endl;
	}
	
	cout << endl;

	bsort(str, DAYS);
	for(int i = 0; i < DAYS; i++){
		cout << *(str + i) << endl;
	}

	return 0;
}	
