#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14169016145933293244ULL;
short var_1 = (short)22012;
int var_3 = 1561529054;
unsigned int var_4 = 3000649571U;
short var_6 = (short)-31416;
int var_9 = 176765032;
int zero = 0;
unsigned char var_15 = (unsigned char)177;
signed char var_16 = (signed char)-9;
unsigned int var_17 = 3125600612U;
_Bool var_18 = (_Bool)1;
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
