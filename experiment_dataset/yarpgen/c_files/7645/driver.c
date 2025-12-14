#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1095709165U;
short var_4 = (short)-17134;
unsigned short var_9 = (unsigned short)33723;
unsigned int var_11 = 1842902793U;
int zero = 0;
short var_13 = (short)402;
unsigned int var_14 = 1122833741U;
void init() {
}

void checksum() {
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
