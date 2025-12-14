#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5312;
short var_1 = (short)23224;
long long int var_4 = 7070598687714387020LL;
signed char var_8 = (signed char)90;
int zero = 0;
unsigned short var_14 = (unsigned short)35456;
unsigned short var_15 = (unsigned short)24763;
void init() {
}

void checksum() {
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
