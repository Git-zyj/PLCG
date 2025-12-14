#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2051256779;
unsigned short var_2 = (unsigned short)39467;
unsigned int var_12 = 1767478629U;
int zero = 0;
long long int var_13 = -62817107966918533LL;
short var_14 = (short)-3740;
unsigned short var_15 = (unsigned short)1578;
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
