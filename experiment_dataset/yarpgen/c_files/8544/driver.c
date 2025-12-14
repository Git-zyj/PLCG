#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)30;
unsigned long long int var_3 = 5911936058080358959ULL;
short var_6 = (short)-3432;
int var_8 = -1677626885;
unsigned int var_9 = 2709759107U;
int zero = 0;
short var_12 = (short)-13080;
int var_13 = -406840894;
unsigned char var_14 = (unsigned char)168;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
