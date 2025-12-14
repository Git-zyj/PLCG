#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5229950542566166839ULL;
unsigned long long int var_3 = 9083397967865147628ULL;
unsigned long long int var_5 = 18155667815942383358ULL;
unsigned char var_8 = (unsigned char)212;
int zero = 0;
int var_11 = -1467858106;
short var_12 = (short)23611;
unsigned long long int var_13 = 9671694758607861178ULL;
void init() {
}

void checksum() {
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
