#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24242;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 16679231603320748586ULL;
unsigned short var_8 = (unsigned short)62190;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 2026110654892319584ULL;
int var_15 = -1316436808;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
