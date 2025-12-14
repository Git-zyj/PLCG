#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-30789;
short var_5 = (short)6796;
unsigned short var_11 = (unsigned short)44492;
unsigned short var_12 = (unsigned short)17112;
int zero = 0;
short var_17 = (short)-16921;
long long int var_18 = 359760403933417087LL;
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
