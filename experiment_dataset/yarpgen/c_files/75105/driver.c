#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2669;
unsigned long long int var_7 = 4835217203002821713ULL;
int zero = 0;
int var_11 = -199517197;
unsigned short var_12 = (unsigned short)1122;
unsigned long long int var_13 = 2778727631700899252ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
