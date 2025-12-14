#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)78;
short var_2 = (short)32285;
unsigned int var_3 = 2216661717U;
long long int var_6 = 1906538391084601010LL;
unsigned char var_8 = (unsigned char)150;
int zero = 0;
short var_10 = (short)-12088;
unsigned long long int var_11 = 18268059952618369931ULL;
unsigned short var_12 = (unsigned short)15350;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
