#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43226;
unsigned short var_13 = (unsigned short)15973;
unsigned char var_16 = (unsigned char)237;
unsigned char var_18 = (unsigned char)181;
int zero = 0;
long long int var_20 = 6598542896191935317LL;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-22133;
unsigned short var_23 = (unsigned short)45978;
signed char var_24 = (signed char)109;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
