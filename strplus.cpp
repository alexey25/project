#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;
 
class String{
	private:
		static const int SZ = 80;
		char str[SZ];
	public:
		String(){
			strcpy(str, " ");
		}
		String(char *s){
			strcpy(str, s);
		}
		void display() const{
			cout << str;
		}
		void operator+=(String ss){
			if(strlen(str) + strlen(ss.str) < SZ){
				strcat(str, ss.str);
			}
			else{
				cout << "Error" << endl;
				exit(1);
			}

		}
};

int main(){
	String s1 = "С Рождеством! ";
	String s2 = "С Новым годом!";

	s1.display();
	cout << endl;
	s2.display();
	
	s1 += s2;
	
	s1.display();
	
	cout << endl;

	return 0;
}
