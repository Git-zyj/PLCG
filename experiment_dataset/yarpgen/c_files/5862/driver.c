#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)161;
unsigned int var_2 = 2569387509U;
int var_5 = 375918697;
unsigned char var_6 = (unsigned char)233;
int var_8 = 1818585811;
signed char var_13 = (signed char)-20;
unsigned int var_16 = 1479440658U;
int zero = 0;
unsigned int var_17 = 3560151796U;
unsigned long long int var_18 = 15106419019255850034ULL;
short var_19 = (short)628;
void init() {
}

void checksum() {
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
