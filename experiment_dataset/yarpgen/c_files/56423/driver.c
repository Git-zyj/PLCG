#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1009371030;
short var_2 = (short)-6833;
signed char var_4 = (signed char)-72;
_Bool var_5 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 4215654875688068069ULL;
unsigned short var_16 = (unsigned short)49473;
signed char var_17 = (signed char)8;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
