#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1576604018U;
long long int var_4 = -1768876394765249320LL;
long long int var_5 = 3780926266202984587LL;
long long int var_7 = 8316559759983359674LL;
signed char var_8 = (signed char)49;
int var_9 = -1798059933;
int zero = 0;
unsigned short var_13 = (unsigned short)44866;
signed char var_14 = (signed char)-31;
unsigned int var_15 = 1826195356U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
