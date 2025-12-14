#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4275535540598978181LL;
int var_3 = 453417885;
unsigned short var_8 = (unsigned short)63307;
signed char var_9 = (signed char)16;
unsigned long long int var_10 = 13162156402542367486ULL;
int zero = 0;
long long int var_13 = 80774406918003269LL;
short var_14 = (short)12703;
unsigned char var_15 = (unsigned char)183;
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
