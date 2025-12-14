#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)48751;
unsigned long long int var_10 = 9419924519212152243ULL;
long long int var_13 = -2245894431319007606LL;
int zero = 0;
short var_19 = (short)26242;
unsigned short var_20 = (unsigned short)55350;
short var_21 = (short)-25911;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
