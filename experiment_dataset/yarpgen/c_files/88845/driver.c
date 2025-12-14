#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19930;
short var_2 = (short)24349;
unsigned char var_11 = (unsigned char)165;
int zero = 0;
unsigned char var_15 = (unsigned char)151;
short var_16 = (short)8789;
short var_17 = (short)-23021;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
