#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1044310720U;
long long int var_13 = 8778330464302812159LL;
signed char var_14 = (signed char)46;
int zero = 0;
unsigned short var_17 = (unsigned short)12450;
short var_18 = (short)-23025;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
