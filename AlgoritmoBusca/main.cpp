#include <iostream>
using namespace std;
void buscaSequencial(int vetor[], int tamanhoVetor, int valorBuscado){
	int resultado[tamanhoVetor];
	for(int i = 0; i<tamanhoVetor; i++){
		if(vetor[i] == valorBuscado){
			resultado[i] = i;
		} else{
			resultado[i] = -1;
		}
	}
	cout << "Resultados(indices): ";
	int cont = tamanhoVetor;
	for(int i = 0; i < tamanhoVetor; i++){
		if(resultado[i] != -1){
			cont --;
			cout << resultado[i] << ", ";
		}
	}
	if(cont == tamanhoVetor){
		cout << "Nenhum resultado encontrado.";
	}
}

buscaBinaria(int vetor[], int tamanhoVetor, int valorBuscado){
	int resultado[tamanhoVetor];
	
	for(int i = 0; i < tamanhoVetor; i++){
		resultado[i] = -1;
	}
	int indiceResultado = 0;
	
	int inicio = 0;
	int fim = tamanhoVetor-1;
	int meio;
	while(inicio <= fim){
		meio = (inicio + fim)/2;
		if(vetor[meio] < valorBuscado){
			inicio = meio + 1;
		} else if(vetor[meio] > valorBuscado){
			fim = meio - 1;
		} else{
			break;
		}				
	}
	while(vetor[meio] == valorBuscado){
		resultado[indiceResultado] = meio;
		indiceResultado ++;
		meio ++;
	}
	meio = (inicio + fim)/2 -1;
	while(vetor[meio] == valorBuscado){
		resultado[indiceResultado] = meio;
		indiceResultado++;
		meio --;
	}
	for(int i = 0; i < tamanhoVetor; i++){
		for(int j = 0; j < tamanhoVetor; j++){
			if(resultado[i]<resultado[j]){
				int auxiliar = resultado[j];
				resultado[j] = resultado[i];
				resultado[i] = auxiliar;
			}
		}
	}
	cout << "Resultados (indices): ";
	int cont = 0;
	for(int i = 0; i < tamanhoVetor; i++){
		if(resultado[i] != -1){
			cout << resultado[i] << " ,";
		}
		if(resultado[i] == -1){
			cont ++;
		}
	}
	if(cont == tamanhoVetor){
		cout << "Nenhum resultado encontrado.";
	}
}

int main() {
	int vetor[7] = {0, 3, 4, 4, 6, 6, 6};
	buscaBinaria(vetor, 7, 6);
	return 0;
}
