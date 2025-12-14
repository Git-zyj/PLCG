#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)1175;
_Bool var_14 = (_Bool)1;
short var_16 = (short)7167;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_19 = (short)7377;
unsigned long long int var_20 = 3467423194274472603ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
