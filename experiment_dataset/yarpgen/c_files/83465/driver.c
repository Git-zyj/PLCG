#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4108670917U;
unsigned int var_7 = 2198394618U;
short var_11 = (short)-9954;
int var_12 = 1602679755;
long long int var_14 = -588368097547381230LL;
int zero = 0;
unsigned int var_15 = 1981292726U;
short var_16 = (short)1582;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)55;
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
