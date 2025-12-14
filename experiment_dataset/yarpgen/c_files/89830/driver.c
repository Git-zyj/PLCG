#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8374243356998686224ULL;
unsigned char var_3 = (unsigned char)50;
unsigned int var_4 = 488695298U;
unsigned int var_5 = 3255958680U;
unsigned int var_6 = 3503383429U;
unsigned long long int var_7 = 14839360974881066885ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)43068;
unsigned long long int var_11 = 14249878418746168997ULL;
unsigned int var_12 = 2486038370U;
signed char var_13 = (signed char)37;
long long int var_14 = -9103523014986344872LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
