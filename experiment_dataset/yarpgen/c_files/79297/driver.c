#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3890824357U;
unsigned char var_8 = (unsigned char)54;
int zero = 0;
short var_15 = (short)-22090;
signed char var_16 = (signed char)20;
unsigned char var_17 = (unsigned char)252;
signed char var_18 = (signed char)-21;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
