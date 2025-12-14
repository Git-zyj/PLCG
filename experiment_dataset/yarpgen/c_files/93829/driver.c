#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 170742227U;
long long int var_3 = 6446476668676165122LL;
unsigned int var_8 = 2654012937U;
unsigned char var_14 = (unsigned char)164;
int zero = 0;
long long int var_16 = -4411033465328858921LL;
unsigned int var_17 = 3028080217U;
void init() {
}

void checksum() {
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
