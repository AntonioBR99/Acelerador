#include <iostream>
#include "sumatorio.h"
using namespace std;

void sumar(double in[], double out[]){

	int x = 0;
	double sum = 0;
	double pot = 0;


	FOR_LOOP: for(int i=0; i<M; i+=N){
		SUM_LOOP: for(int j =0; j<N;j++){
			sum = sum + (in[i+j]*in[i+j]);
			x++;
		}
		out[(x/N)-1] = sum;
		sum =0;
	}
}
