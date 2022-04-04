#include <iostream>
#include "sumatorio.h"
using namespace std;

int main(){

	double in[M],out[TAM_OUT];
	double v_random;
	int s_random;


	for(int i=0; i<M; i++){

		v_random = (double)(rand() / ((double)(RAND_MAX)));
		s_random = (rand() % 2);

		if(s_random == 0){
			v_random = -v_random;
		}

		in[i] = v_random;
	}
		cout << "entradas: [" << in[0];
	for(int i = 1; i<M; i++){
			cout << " , " << in[i];
		}

		cout << "]" << endl;

	sumar(in,out);

	for(int i = 0; i<TAM_OUT; i++){
		cout << "resultado " << i << " = " << out[i] << endl;
	}

	return 0;
}
