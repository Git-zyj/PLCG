#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)81;
long long int var_5 = -61207531585338641LL;
signed char var_7 = (signed char)107;
int var_8 = -1410907877;
unsigned short var_9 = (unsigned short)63232;
long long int var_10 = -6939603123221288003LL;
int zero = 0;
unsigned char var_16 = (unsigned char)138;
unsigned long long int var_17 = 9061117976140075231ULL;
long long int var_18 = -2557872126139844360LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
