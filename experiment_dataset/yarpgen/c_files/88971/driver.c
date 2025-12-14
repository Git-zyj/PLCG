#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17969229797450692467ULL;
short var_2 = (short)10230;
unsigned char var_3 = (unsigned char)164;
int zero = 0;
unsigned long long int var_14 = 14998477992099675315ULL;
short var_15 = (short)3526;
unsigned char var_16 = (unsigned char)105;
int var_17 = -1885113038;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
