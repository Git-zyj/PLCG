#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 464873477U;
int var_6 = 1741411020;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 1140183792U;
int zero = 0;
unsigned short var_11 = (unsigned short)56078;
int var_12 = 1291618298;
unsigned char var_13 = (unsigned char)230;
void init() {
}

void checksum() {
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
