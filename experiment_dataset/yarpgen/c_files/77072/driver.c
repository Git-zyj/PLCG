#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)31;
signed char var_3 = (signed char)-16;
short var_4 = (short)28369;
long long int var_5 = 556794707719211525LL;
short var_12 = (short)6420;
unsigned char var_14 = (unsigned char)15;
int zero = 0;
int var_15 = 998820393;
unsigned char var_16 = (unsigned char)241;
unsigned char var_17 = (unsigned char)180;
long long int var_18 = 679828344863528800LL;
int var_19 = 156605303;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
