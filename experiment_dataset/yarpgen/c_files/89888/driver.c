#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1058104809;
unsigned long long int var_2 = 9889055492280603272ULL;
signed char var_9 = (signed char)-127;
int zero = 0;
unsigned int var_16 = 2219303688U;
signed char var_17 = (signed char)118;
short var_18 = (short)-14082;
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
