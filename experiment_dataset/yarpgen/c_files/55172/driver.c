#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-122;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)10282;
unsigned short var_4 = (unsigned short)34323;
unsigned short var_6 = (unsigned short)47304;
unsigned short var_8 = (unsigned short)7727;
int zero = 0;
unsigned long long int var_11 = 8642622449923226771ULL;
signed char var_12 = (signed char)-49;
unsigned char var_13 = (unsigned char)236;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
