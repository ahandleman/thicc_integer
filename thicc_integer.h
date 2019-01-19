#include <stdint.h>

typedef struct THICC_INTEGER
{
	uint64_t size; //in bytes
	uint8_t * bytes; //bytes storing the value
} thicc_integer;

//Initializes the memory for a thicc_integer, all thicc_integers are pointers and must be alloc'd and free'd to prevent stupid memory leaks
thicc_integer * thi_alloc(uint64_t size);

//Frees the memory for a thicc_integer
void thi_free(thicc_integer * target);