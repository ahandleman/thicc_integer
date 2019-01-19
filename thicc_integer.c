#include "thicc_integer.h"

//Initializes the memory for a thicc_integer, all thicc_integers are pointers and must be alloc'd and free'd to prevent stupid memory leaks
thicc_integer * thi_alloc(uint64_t size) {
	thicc_integer * new_thicc = malloc(sizeof(thicc_integer));
	new_thicc->size = size;
	new_thicc->bytes = calloc(sizeof(uint8_t), size);
	return new_thicc;
}

//Frees the memory for a thicc_integer
void thi_free(thicc_integer * target) {
	free(target->bytes);
	free(target);
}