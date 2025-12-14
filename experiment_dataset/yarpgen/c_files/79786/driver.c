#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)236;
unsigned short var_3 = (unsigned short)63020;
unsigned short var_4 = (unsigned short)46369;
long long int var_5 = -7337700208436834572LL;
short var_6 = (short)-32189;
int var_7 = 390686312;
unsigned short var_8 = (unsigned short)49247;
long long int var_9 = 2446006517968549952LL;
unsigned short var_10 = (unsigned short)58442;
int zero = 0;
short var_11 = (short)-4277;
long long int var_12 = -5449117986217744558LL;
void init() {
}

void checksum() {
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
