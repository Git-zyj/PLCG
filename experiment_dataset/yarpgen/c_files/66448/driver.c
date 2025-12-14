#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1831039583;
unsigned short var_2 = (unsigned short)57022;
signed char var_3 = (signed char)14;
int var_7 = 1341030363;
int var_8 = -2124673952;
int zero = 0;
unsigned int var_10 = 1351675732U;
signed char var_11 = (signed char)-70;
unsigned int var_12 = 1516462303U;
int var_13 = -1476193157;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
