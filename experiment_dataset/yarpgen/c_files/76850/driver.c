#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 602084851U;
short var_1 = (short)7532;
short var_2 = (short)29012;
unsigned char var_5 = (unsigned char)26;
unsigned char var_8 = (unsigned char)199;
unsigned int var_11 = 3186042650U;
unsigned long long int var_12 = 14759190016587835716ULL;
unsigned long long int var_16 = 11764793176504715813ULL;
int zero = 0;
unsigned long long int var_19 = 9499143949392426578ULL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
