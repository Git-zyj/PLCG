#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)48090;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 11723420719078277072ULL;
signed char var_7 = (signed char)90;
unsigned long long int var_8 = 15747636491271391483ULL;
int zero = 0;
int var_12 = 1283281717;
unsigned short var_13 = (unsigned short)55830;
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
