#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32015;
unsigned int var_4 = 2989874554U;
_Bool var_6 = (_Bool)0;
short var_8 = (short)30714;
int var_11 = 1281800420;
int zero = 0;
short var_13 = (short)-27480;
signed char var_14 = (signed char)-61;
unsigned short var_15 = (unsigned short)16038;
unsigned short var_16 = (unsigned short)11180;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
