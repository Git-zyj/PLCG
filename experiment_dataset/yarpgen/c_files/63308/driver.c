#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)113;
unsigned char var_3 = (unsigned char)24;
int var_7 = -892338580;
long long int var_13 = 1643379161012077358LL;
long long int var_14 = -8719295173793464616LL;
short var_18 = (short)24683;
signed char var_19 = (signed char)13;
int zero = 0;
unsigned int var_20 = 1271982117U;
unsigned int var_21 = 1681127138U;
unsigned short var_22 = (unsigned short)19227;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
