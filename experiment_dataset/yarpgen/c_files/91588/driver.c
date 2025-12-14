#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17417568631466534358ULL;
int var_1 = -179550061;
unsigned char var_4 = (unsigned char)50;
unsigned long long int var_5 = 3121873299006775558ULL;
signed char var_6 = (signed char)107;
long long int var_10 = -2601616586695244090LL;
int zero = 0;
unsigned int var_12 = 2291859363U;
signed char var_13 = (signed char)-10;
unsigned short var_14 = (unsigned short)36649;
unsigned short var_15 = (unsigned short)10213;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
