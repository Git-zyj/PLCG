#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-28334;
int var_8 = 526693353;
short var_14 = (short)30525;
unsigned long long int var_15 = 8168525554940127962ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)78;
int var_19 = 75061284;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
