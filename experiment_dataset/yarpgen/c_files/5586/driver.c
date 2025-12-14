#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 953521052U;
long long int var_1 = -5094183549157558433LL;
long long int var_7 = 6056728254072313041LL;
unsigned char var_11 = (unsigned char)101;
int zero = 0;
int var_12 = -2044810807;
long long int var_13 = -1527990286128313595LL;
void init() {
}

void checksum() {
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
