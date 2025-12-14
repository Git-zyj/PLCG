#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 8396897137159768998ULL;
unsigned short var_10 = (unsigned short)18722;
int var_11 = -856012233;
int zero = 0;
short var_16 = (short)-28217;
int var_17 = 1762705793;
unsigned long long int var_18 = 6214877696589397442ULL;
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
