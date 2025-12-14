#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1985741070;
int var_1 = 715958976;
unsigned char var_4 = (unsigned char)132;
long long int var_6 = 4111361273069653703LL;
int zero = 0;
int var_12 = -1640725462;
int var_13 = 1307194388;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
