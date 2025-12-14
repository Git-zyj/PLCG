#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)212;
signed char var_5 = (signed char)-52;
unsigned int var_8 = 3233748791U;
unsigned long long int var_9 = 15286156960897590414ULL;
int zero = 0;
unsigned long long int var_10 = 14013181089588513204ULL;
unsigned long long int var_11 = 1712557480196796810ULL;
int var_12 = 2010168765;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
