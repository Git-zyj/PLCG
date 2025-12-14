#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)1266;
signed char var_7 = (signed char)-33;
int var_12 = 1995029884;
unsigned char var_14 = (unsigned char)48;
unsigned long long int var_15 = 10983625966883545731ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)8330;
unsigned short var_18 = (unsigned short)47836;
signed char var_19 = (signed char)99;
long long int var_20 = 999259325989517595LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
