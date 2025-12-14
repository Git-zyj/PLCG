#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)74;
unsigned int var_8 = 3917919279U;
unsigned short var_10 = (unsigned short)20133;
int var_13 = -2142252982;
long long int var_15 = -3426906235119454472LL;
long long int var_16 = 8794215987699004478LL;
int zero = 0;
short var_18 = (short)24487;
unsigned short var_19 = (unsigned short)22643;
int var_20 = 331678855;
signed char var_21 = (signed char)61;
void init() {
}

void checksum() {
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
