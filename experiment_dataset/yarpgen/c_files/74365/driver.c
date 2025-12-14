#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-113;
signed char var_6 = (signed char)(-127 - 1);
short var_10 = (short)-14658;
int zero = 0;
unsigned int var_15 = 1017043136U;
unsigned short var_16 = (unsigned short)44724;
unsigned short var_17 = (unsigned short)62994;
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
