#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2631;
unsigned int var_1 = 2580807228U;
unsigned int var_7 = 4112596908U;
unsigned int var_11 = 1889334336U;
signed char var_14 = (signed char)30;
int zero = 0;
signed char var_15 = (signed char)-46;
long long int var_16 = -5149147390251521855LL;
signed char var_17 = (signed char)62;
short var_18 = (short)-15888;
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
