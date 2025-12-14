#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
short var_9 = (short)-18873;
signed char var_12 = (signed char)-91;
signed char var_14 = (signed char)66;
unsigned int var_15 = 798909574U;
int zero = 0;
short var_18 = (short)-26811;
unsigned int var_19 = 2428783313U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
