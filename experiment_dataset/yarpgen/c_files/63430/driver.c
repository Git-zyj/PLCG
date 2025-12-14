#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25338;
long long int var_1 = 7484457449996679676LL;
int var_2 = -53454266;
unsigned char var_4 = (unsigned char)195;
short var_5 = (short)-15347;
unsigned char var_9 = (unsigned char)214;
unsigned short var_10 = (unsigned short)48152;
unsigned char var_11 = (unsigned char)106;
unsigned long long int var_14 = 16161468341328209324ULL;
signed char var_15 = (signed char)57;
int zero = 0;
unsigned int var_16 = 933710848U;
unsigned int var_17 = 2533639181U;
unsigned long long int var_18 = 10199710700824576927ULL;
unsigned int var_19 = 3910323422U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
