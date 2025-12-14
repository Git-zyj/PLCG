#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14502377095117999018ULL;
unsigned long long int var_1 = 10270838069055373722ULL;
unsigned char var_7 = (unsigned char)212;
unsigned char var_10 = (unsigned char)31;
long long int var_11 = 2669495408387299058LL;
int zero = 0;
short var_12 = (short)23625;
long long int var_13 = 3886659908323576662LL;
long long int var_14 = -2003328870076724883LL;
long long int var_15 = 8504011770133563050LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
