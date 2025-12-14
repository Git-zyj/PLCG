#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)28520;
unsigned long long int var_5 = 13510565424954437439ULL;
int var_8 = 1337500880;
unsigned long long int var_9 = 11621796016238038231ULL;
unsigned long long int var_11 = 9454178336123694514ULL;
unsigned char var_14 = (unsigned char)213;
short var_17 = (short)30516;
int zero = 0;
signed char var_19 = (signed char)-16;
unsigned long long int var_20 = 1713120770210661582ULL;
short var_21 = (short)15013;
unsigned long long int var_22 = 11084350722951012612ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
