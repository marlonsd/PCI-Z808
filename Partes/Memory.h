/*
 * MEMÓRIA:
 * 
 * - Tamanho total: 64 Kbytes;
 * - Endereçada a word (16 bits);
 * 
 * PROCESSADOR DE MACROS:
 * - Uma passada somente;
 * - Permite redefinição de macros, do tipo do Calingaert;
 * 
 * EM RELAÇÃO AO CÓDIGO:
 * - Cada módulo é uma classe;
 * - Cada módulo possuirá um módulo "executar";
 * - O programa inicial terá um "main" para testar os módulos em sequência e integrá-los;
 * - Interface gráfica será definida depois de terminar o programa "main".
 */

#ifndef MEMORY_H
#define	MEMORY_H

 
#include <iostream>

using namespace std;

class Memory {

private:
	unsigned short int *value;		// Vetor de words (Tamanho indefinido, será definido por um módulo construtor).
	int size;
	
public:
	Memory(int size = 32000);	
	~Memory();
	int getValue(int position);
	void setValue(int position, unsigned short int value);
};

#endif