#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2644553063845752333LL;
short var_2 = (short)-8112;
signed char var_4 = (signed char)-99;
unsigned long long int var_5 = 10767334185762759990ULL;
unsigned short var_8 = (unsigned short)17223;
unsigned char var_17 = (unsigned char)199;
int zero = 0;
short var_20 = (short)18391;
unsigned long long int var_21 = 7040592585799398474ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
