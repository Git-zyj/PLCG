#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)172;
short var_4 = (short)-7345;
unsigned char var_10 = (unsigned char)6;
int zero = 0;
short var_17 = (short)-13019;
unsigned int var_18 = 316133087U;
long long int var_19 = 5045050552604451529LL;
unsigned short var_20 = (unsigned short)41443;
int var_21 = 1043833597;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
