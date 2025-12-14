#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-1244;
long long int var_4 = -7000974048716662001LL;
short var_6 = (short)-14828;
short var_7 = (short)22539;
signed char var_8 = (signed char)73;
short var_9 = (short)24388;
int zero = 0;
unsigned int var_12 = 1841297827U;
unsigned long long int var_13 = 15503723461552019037ULL;
short var_14 = (short)17914;
unsigned long long int var_15 = 15383810521013553157ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
