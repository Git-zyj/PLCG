#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24488;
unsigned long long int var_1 = 18180884525993294442ULL;
signed char var_2 = (signed char)84;
unsigned char var_7 = (unsigned char)78;
int zero = 0;
int var_11 = 156777160;
short var_12 = (short)27961;
void init() {
}

void checksum() {
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
