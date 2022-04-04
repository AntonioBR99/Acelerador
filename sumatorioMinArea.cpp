#include <iostream>
#include "sumatorio.h"
using namespace std;

void sumar(double in[], double out[]){

	int x = 0;
	double sum = 0;
	double pot = 0;

	SUM_LOOP:
	for(int i = 0; i < M; i += 4){
		pot = (in[i]*in[i]) + (in[i+1]*in[i+1]) + (in[i+2]*in[i+2]) + (in[i+3]*in[i+3]); // Para N = 4

		x += 4;
		out[(x/N)-1] = pot;
		pot = 0;
	}
}
