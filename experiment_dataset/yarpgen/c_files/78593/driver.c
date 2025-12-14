#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4543801702480544905LL;
short var_4 = (short)-21782;
unsigned char var_7 = (unsigned char)27;
unsigned long long int var_8 = 2287649077280843736ULL;
unsigned long long int var_11 = 7304683180692546669ULL;
int zero = 0;
short var_15 = (short)-6693;
unsigned int var_16 = 410776906U;
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
