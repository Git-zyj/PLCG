#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -2062735789;
int var_6 = -1120285238;
unsigned long long int var_9 = 7930962331964518681ULL;
int zero = 0;
int var_12 = 493071130;
unsigned char var_13 = (unsigned char)191;
unsigned short var_14 = (unsigned short)24573;
void init() {
}

void checksum() {
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
