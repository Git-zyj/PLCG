#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12446543925957351665ULL;
short var_2 = (short)2826;
unsigned long long int var_3 = 3373687448757798863ULL;
int zero = 0;
unsigned long long int var_14 = 8794474816207459370ULL;
unsigned char var_15 = (unsigned char)54;
void init() {
}

void checksum() {
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
