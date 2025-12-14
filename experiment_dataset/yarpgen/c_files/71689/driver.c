#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2522352716U;
unsigned char var_2 = (unsigned char)139;
signed char var_3 = (signed char)90;
short var_7 = (short)4182;
short var_12 = (short)-25002;
int zero = 0;
unsigned int var_16 = 2724750042U;
short var_17 = (short)14570;
long long int var_18 = 379721022601821526LL;
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
