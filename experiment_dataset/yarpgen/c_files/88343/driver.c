#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48091;
long long int var_3 = -1932548729891184272LL;
int var_4 = 1046455482;
long long int var_11 = -8770586955420721839LL;
int zero = 0;
unsigned char var_13 = (unsigned char)79;
unsigned int var_14 = 4113922210U;
unsigned short var_15 = (unsigned short)61953;
_Bool var_16 = (_Bool)0;
long long int var_17 = -8624500498704152804LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
