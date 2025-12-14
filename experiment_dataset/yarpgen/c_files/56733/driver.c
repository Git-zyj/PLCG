#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2823900355U;
unsigned char var_3 = (unsigned char)147;
unsigned int var_4 = 1418141700U;
signed char var_6 = (signed char)72;
unsigned char var_7 = (unsigned char)22;
unsigned int var_8 = 3443186837U;
unsigned short var_10 = (unsigned short)11803;
short var_11 = (short)-32121;
int zero = 0;
signed char var_12 = (signed char)-120;
long long int var_13 = -6567108782629808475LL;
short var_14 = (short)2019;
signed char var_15 = (signed char)108;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
