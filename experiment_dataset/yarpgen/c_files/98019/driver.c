#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3500032484U;
int var_1 = 455815301;
long long int var_2 = 5328491978245220442LL;
unsigned char var_3 = (unsigned char)139;
unsigned int var_4 = 1372811709U;
unsigned char var_5 = (unsigned char)130;
unsigned long long int var_6 = 6454093801386899173ULL;
unsigned char var_7 = (unsigned char)140;
unsigned short var_8 = (unsigned short)41789;
unsigned char var_9 = (unsigned char)234;
int var_10 = 825591835;
unsigned char var_12 = (unsigned char)18;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)21;
unsigned int var_19 = 2613004963U;
int zero = 0;
short var_20 = (short)-23303;
_Bool var_21 = (_Bool)0;
long long int var_22 = -435782873384040641LL;
unsigned short var_23 = (unsigned short)38498;
unsigned short var_24 = (unsigned short)48765;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
