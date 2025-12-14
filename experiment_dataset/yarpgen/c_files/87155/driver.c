#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38796;
short var_8 = (short)4623;
signed char var_11 = (signed char)-69;
int zero = 0;
unsigned short var_12 = (unsigned short)28537;
int var_13 = -81281620;
unsigned short var_14 = (unsigned short)3247;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
