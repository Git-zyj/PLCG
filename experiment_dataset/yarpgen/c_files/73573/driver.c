#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 972865651U;
short var_1 = (short)-20224;
int var_2 = -1329801006;
int var_3 = -917136;
unsigned short var_7 = (unsigned short)35364;
int zero = 0;
unsigned short var_10 = (unsigned short)1776;
short var_11 = (short)21532;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
