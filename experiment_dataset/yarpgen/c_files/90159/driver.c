#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4395;
int var_2 = 1827155383;
unsigned char var_4 = (unsigned char)135;
signed char var_8 = (signed char)-71;
unsigned long long int var_10 = 9324697768801601025ULL;
int zero = 0;
signed char var_11 = (signed char)-27;
short var_12 = (short)24724;
int var_13 = 68070262;
unsigned long long int var_14 = 688136793186503998ULL;
void init() {
}

void checksum() {
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
