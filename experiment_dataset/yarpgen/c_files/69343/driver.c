#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2672916328U;
short var_8 = (short)9570;
int zero = 0;
short var_10 = (short)23203;
short var_11 = (short)-21983;
unsigned short var_12 = (unsigned short)37216;
signed char var_13 = (signed char)103;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
