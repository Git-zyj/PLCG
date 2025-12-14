#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3861773250U;
long long int var_4 = 2956707837386622518LL;
unsigned int var_10 = 3024032734U;
short var_12 = (short)-28687;
short var_13 = (short)16446;
int zero = 0;
unsigned short var_17 = (unsigned short)17516;
unsigned long long int var_18 = 3064663818252651733ULL;
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
