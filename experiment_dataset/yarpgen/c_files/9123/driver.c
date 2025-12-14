#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5678;
unsigned short var_2 = (unsigned short)4883;
unsigned int var_3 = 642753317U;
unsigned long long int var_4 = 5479267591014510163ULL;
short var_11 = (short)-16203;
unsigned char var_12 = (unsigned char)227;
int zero = 0;
unsigned int var_13 = 3568565928U;
long long int var_14 = -4034450095199567791LL;
unsigned short var_15 = (unsigned short)64413;
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
