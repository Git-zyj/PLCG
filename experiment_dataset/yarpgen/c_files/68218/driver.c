#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -701466782;
unsigned short var_2 = (unsigned short)18965;
int var_3 = 878956656;
int var_7 = 2143660411;
int zero = 0;
int var_12 = 1184108433;
int var_13 = 1662086283;
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
