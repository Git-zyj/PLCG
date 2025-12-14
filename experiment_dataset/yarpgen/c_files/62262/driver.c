#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2676183816U;
unsigned int var_1 = 416338137U;
unsigned int var_8 = 1348621915U;
unsigned int var_9 = 2002548849U;
unsigned int var_12 = 1488244255U;
unsigned int var_18 = 3515720808U;
int zero = 0;
unsigned int var_20 = 1590312598U;
unsigned int var_21 = 898794373U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
