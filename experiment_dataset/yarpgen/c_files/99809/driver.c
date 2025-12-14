#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)76;
long long int var_9 = 7520655911872215568LL;
unsigned short var_10 = (unsigned short)55805;
long long int var_13 = -1047837704130459433LL;
long long int var_14 = 8001286935103069881LL;
int zero = 0;
unsigned int var_17 = 1437469038U;
int var_18 = -1477174085;
unsigned short var_19 = (unsigned short)6378;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
