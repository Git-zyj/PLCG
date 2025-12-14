#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3634723496U;
short var_5 = (short)-1291;
unsigned char var_8 = (unsigned char)199;
int zero = 0;
unsigned int var_10 = 2154959412U;
short var_11 = (short)19198;
unsigned int var_12 = 3103609669U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
