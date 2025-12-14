#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2229228171084796447LL;
unsigned short var_8 = (unsigned short)29562;
unsigned long long int var_13 = 8313920027367314090ULL;
int zero = 0;
unsigned int var_16 = 2747233680U;
short var_17 = (short)15115;
void init() {
}

void checksum() {
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
