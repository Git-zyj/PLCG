#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)112;
unsigned short var_2 = (unsigned short)35877;
unsigned short var_3 = (unsigned short)9250;
unsigned char var_4 = (unsigned char)139;
short var_6 = (short)27131;
unsigned long long int var_10 = 2990050773978282937ULL;
int zero = 0;
unsigned int var_13 = 1048850841U;
unsigned long long int var_14 = 2822049907857532307ULL;
long long int var_15 = -2870517177045592519LL;
void init() {
}

void checksum() {
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
