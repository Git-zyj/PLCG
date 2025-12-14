#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)58;
unsigned int var_3 = 2792014275U;
long long int var_9 = 2332408278372029089LL;
unsigned long long int var_11 = 12293173764802155999ULL;
unsigned short var_12 = (unsigned short)27018;
int zero = 0;
unsigned long long int var_14 = 7105121164505723528ULL;
short var_15 = (short)-11533;
short var_16 = (short)-11328;
void init() {
}

void checksum() {
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
