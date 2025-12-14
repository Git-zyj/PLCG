#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)48;
unsigned long long int var_1 = 10448254073082198613ULL;
unsigned long long int var_2 = 6666127762420045499ULL;
long long int var_3 = -3356665349228303322LL;
long long int var_5 = 5741757282679180802LL;
unsigned int var_6 = 2584985485U;
short var_8 = (short)-13971;
unsigned int var_9 = 3684449027U;
int var_11 = -762379850;
int zero = 0;
unsigned int var_12 = 680838294U;
int var_13 = -2080658078;
unsigned short var_14 = (unsigned short)14474;
unsigned short var_15 = (unsigned short)44966;
unsigned short var_16 = (unsigned short)19334;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
