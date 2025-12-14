#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3234657762U;
unsigned int var_7 = 1235594324U;
unsigned long long int var_8 = 7739499078548744639ULL;
int var_10 = 582238256;
int var_11 = 1553817515;
int zero = 0;
int var_13 = -375147221;
unsigned short var_14 = (unsigned short)44139;
int var_15 = 461448123;
long long int var_16 = 2878232333349092031LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
