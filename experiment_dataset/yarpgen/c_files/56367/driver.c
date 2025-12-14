#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1940627526;
unsigned char var_11 = (unsigned char)68;
unsigned char var_13 = (unsigned char)75;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_16 = 6998092297492334444LL;
unsigned short var_17 = (unsigned short)14044;
void init() {
}

void checksum() {
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
