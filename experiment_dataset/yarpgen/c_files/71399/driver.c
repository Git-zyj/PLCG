#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 707758460427672729LL;
long long int var_5 = 4567825919843444374LL;
short var_7 = (short)3538;
int zero = 0;
int var_13 = -1229297362;
unsigned short var_14 = (unsigned short)44278;
void init() {
}

void checksum() {
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
