#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 17087278898237166548ULL;
long long int var_9 = 6997459673030434843LL;
short var_11 = (short)-29279;
int zero = 0;
int var_15 = -1079834646;
unsigned long long int var_16 = 1198195863490498807ULL;
unsigned long long int var_17 = 2978801730863491149ULL;
void init() {
}

void checksum() {
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
