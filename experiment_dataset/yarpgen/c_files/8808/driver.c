#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51966;
long long int var_2 = -1666865336652761249LL;
int var_5 = 267380904;
int zero = 0;
unsigned char var_10 = (unsigned char)31;
int var_11 = 1601317442;
short var_12 = (short)8821;
long long int var_13 = -1718900989203310407LL;
long long int var_14 = -8670603128214850918LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
