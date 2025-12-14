#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-11312;
unsigned char var_4 = (unsigned char)247;
unsigned char var_5 = (unsigned char)16;
unsigned short var_6 = (unsigned short)13183;
long long int var_7 = -7778252006569036664LL;
unsigned char var_8 = (unsigned char)61;
unsigned int var_9 = 2349911864U;
int zero = 0;
int var_10 = -1975094345;
unsigned char var_11 = (unsigned char)247;
short var_12 = (short)-24938;
unsigned long long int var_13 = 2158043378505309543ULL;
unsigned long long int var_14 = 17208375743883483427ULL;
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
