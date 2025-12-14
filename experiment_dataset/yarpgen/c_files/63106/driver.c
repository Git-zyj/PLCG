#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 6610196258928791502LL;
unsigned char var_7 = (unsigned char)80;
unsigned char var_8 = (unsigned char)189;
int zero = 0;
short var_10 = (short)-31303;
unsigned long long int var_11 = 6909742330636814974ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
