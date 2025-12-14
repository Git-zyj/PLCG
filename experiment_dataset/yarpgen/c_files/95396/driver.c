#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4011082977U;
unsigned short var_2 = (unsigned short)50049;
unsigned short var_12 = (unsigned short)64704;
int zero = 0;
short var_15 = (short)-11756;
unsigned long long int var_16 = 15147045457428272736ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
