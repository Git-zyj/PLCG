#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 809068702U;
unsigned char var_2 = (unsigned char)193;
unsigned char var_8 = (unsigned char)44;
int zero = 0;
short var_10 = (short)6117;
short var_11 = (short)-26410;
signed char var_12 = (signed char)63;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
