#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1776437661U;
long long int var_1 = 2359173215032578832LL;
unsigned char var_3 = (unsigned char)117;
unsigned char var_6 = (unsigned char)160;
long long int var_10 = -8702085968293078818LL;
int zero = 0;
signed char var_17 = (signed char)115;
unsigned char var_18 = (unsigned char)68;
unsigned char var_19 = (unsigned char)75;
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
