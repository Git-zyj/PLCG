#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)103;
short var_2 = (short)-16607;
unsigned char var_4 = (unsigned char)66;
short var_18 = (short)-20511;
int zero = 0;
unsigned int var_19 = 2263833293U;
unsigned short var_20 = (unsigned short)20203;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
