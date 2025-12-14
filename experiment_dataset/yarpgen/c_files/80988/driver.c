#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)40227;
short var_9 = (short)27176;
unsigned char var_10 = (unsigned char)65;
long long int var_14 = 4856213984000716504LL;
short var_15 = (short)27930;
int zero = 0;
unsigned short var_16 = (unsigned short)29617;
unsigned int var_17 = 1761774536U;
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
