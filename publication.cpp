#include <iostream>

using namespace std;

class publication{
	protected:		
		string str;
		float prise;
	public:
		publication(){
			str = "-";
			prise = 0 ;
		}	
		void getdate(){
			cout << "Название: ";
			cin >> str;
			cout << "Цена: ";
			cin >> prise;
		}
		void putdate(){
			cout << "Название: "<< str << endl;
			cout << "Цена: " << prise << endl;
		}
};

class sales{
	protected:
		float array[3];
	public:
		sales(){
			for(int i = 0; i < 3; i++){
				array[i] = 0;
			}
		}
		void getdate(){
			cout << "array: " << endl;		
			for(int i = 0; i < 3; i++){
				cin >> array[i];
			}
		}
		void putdate(){
			cout << "array: [";
			for(int i = 0; i < 3; i++){
				cout << array[i] << " ";
			}
			cout << "]" << endl;
		}
};

class book : publication, sales{
	private:
		int st;
	public:
		book() : publication(), sales(){
			st = 0;
		}
		void getdate(){
			cout << "Введите количество страниц: ";
			cin >> st;
			publication :: getdate();
			sales :: getdate();
		}
		void putdate(){
			cout << "Количество страниц: " << st << endl;
			publication :: putdate();	
			sales :: putdate();
		}
};

class type : publication, sales{
	private:
		float time;
	public:
		type() : publication(), sales(){
			time = 0;
		}
		void getdate(){
			cout << "Введите время записи: ";
			cin >> time;
			publication :: getdate();
			sales :: getdate();
		}
		void putdate(){
			cout << "Время записи: " << time << endl;
			publication :: putdate();
			sales :: putdate();
		}	
};

int main(){
	book b1;
	type t1;

	b1.putdate();
	t1.putdate();

	b1.getdate();
	t1.getdate();
	
	b1.putdate();
	t1.putdate();

	b1.getdate();
	t1.getdate();
	
	b1.putdate();
	t1.putdate();

	return 0;
}
