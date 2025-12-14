#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)51;
unsigned int var_9 = 2274259760U;
unsigned int var_10 = 1777603808U;
signed char var_12 = (signed char)123;
int zero = 0;
signed char var_15 = (signed char)27;
unsigned short var_16 = (unsigned short)25824;
unsigned char var_17 = (unsigned char)177;
signed char var_18 = (signed char)-60;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
