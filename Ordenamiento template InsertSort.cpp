#include <iostream>
using namespace std;

template <class T> void ordenInsert (T v[], int tam);

int main (){
	
	char palabra[5] = {'a','r','c','h','i'};
	int serieI[5] = {5,1,2,6,3};
	float serieF[5] = {3.2,5.6,2.3,3.1,3.3};
	
	cout<<"Los siguientes son los array:"<<endl;
	for (int i=0;i<3;i++){
		for (int j=0;j<5;j++){
			if (i==0){
				cout<<palabra[j]<<" ";
			}
			else if (i==1){
				cout<<serieI[j]<<" ";
			}
			else{
				cout<<serieF[j]<<" ";
			}
		}
		cout<<endl;
	}
	
	ordenInsert (palabra,5);
	ordenInsert (serieI,5);
	ordenInsert (serieF,5);
	cout<<endl;
	
	cout<<"Los siguientes son los array ordenados:"<<endl;
	for (int i=0;i<3;i++){
		for (int j=0;j<5;j++){
			if (i==0){
				cout<<palabra[j]<<" ";
			}
			else if (i==1){
				cout<<serieI[j]<<" ";
			}
			else{
				cout<<serieF[j]<<" ";
			}
		}
		cout<<endl;
	}
	
	system("PAUSE");
	return 0;
}

template <class T> void ordenInsert (T v[], int tam){
	T temp;
	int j;
	for (int i=1; i<tam; i++){
		temp = v[i];
		j = i-1;
		while ((v[j] > temp) && (j >= 0)){
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = temp;
	}
}
