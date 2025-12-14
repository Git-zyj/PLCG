#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 260404751U;
unsigned long long int var_1 = 8185611183942384266ULL;
short var_6 = (short)-18648;
unsigned char var_9 = (unsigned char)104;
unsigned char var_12 = (unsigned char)227;
int zero = 0;
signed char var_14 = (signed char)50;
int var_15 = 284993087;
unsigned int var_16 = 946494045U;
int var_17 = -80454049;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
