#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1512574249940809795LL;
unsigned char var_5 = (unsigned char)219;
unsigned int var_6 = 382347116U;
short var_8 = (short)-22069;
unsigned short var_10 = (unsigned short)41521;
unsigned char var_11 = (unsigned char)156;
int zero = 0;
int var_12 = -1265996530;
unsigned char var_13 = (unsigned char)254;
long long int var_14 = -2218922898598037207LL;
void init() {
}

void checksum() {
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
