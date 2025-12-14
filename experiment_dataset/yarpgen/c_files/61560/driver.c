#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2125832702;
long long int var_7 = 8271504089810498653LL;
unsigned short var_11 = (unsigned short)34876;
int zero = 0;
signed char var_16 = (signed char)4;
short var_17 = (short)7376;
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
