#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17738872418151100993ULL;
unsigned short var_12 = (unsigned short)58869;
int zero = 0;
unsigned short var_15 = (unsigned short)15864;
short var_16 = (short)-2331;
unsigned long long int var_17 = 6505781359145104468ULL;
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
