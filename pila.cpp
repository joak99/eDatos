#include <vector>
#include <string>
using namespace std;

template <typename T>

class Pila : public vector{
	void adicionar(T elem){
		push_back(elem);

	}
    void mostrar(){
    	for (int i=0; i < Pila.size(); i++){
    		cout << at(i) << endl;

    	} 
    }
}

int main(){

	vector <int> p;
	p.push_back(1);
	p.push_back(2);
	//p.adicionar(3);
	//p.mostrar();
}
