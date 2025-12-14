#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6874576877250449137ULL;
unsigned int var_2 = 4131573506U;
_Bool var_3 = (_Bool)1;
signed char var_6 = (signed char)92;
unsigned short var_7 = (unsigned short)47564;
int var_8 = 1929793848;
unsigned int var_9 = 1971127336U;
int zero = 0;
unsigned long long int var_10 = 6128962542174717953ULL;
int var_11 = -1959845077;
unsigned long long int var_12 = 16371163529799308605ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
