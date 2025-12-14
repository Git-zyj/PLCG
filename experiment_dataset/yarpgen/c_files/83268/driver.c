#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63694;
unsigned long long int var_3 = 17512513493250751624ULL;
unsigned int var_8 = 256042425U;
short var_13 = (short)-27878;
int zero = 0;
unsigned short var_15 = (unsigned short)34871;
unsigned short var_16 = (unsigned short)58914;
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
