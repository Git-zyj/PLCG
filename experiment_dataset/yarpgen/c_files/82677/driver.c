#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)174;
signed char var_2 = (signed char)55;
unsigned long long int var_5 = 3095303939317550391ULL;
unsigned long long int var_6 = 6217190976739365350ULL;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)17513;
int zero = 0;
short var_12 = (short)-32425;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-21590;
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
