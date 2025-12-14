#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18296509338368128516ULL;
_Bool var_4 = (_Bool)1;
unsigned short var_9 = (unsigned short)26273;
unsigned long long int var_11 = 3411573345374982827ULL;
int zero = 0;
unsigned int var_12 = 1430147299U;
unsigned long long int var_13 = 16469150825560389495ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
