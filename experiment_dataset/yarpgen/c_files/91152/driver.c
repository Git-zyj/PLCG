#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)0;
unsigned char var_3 = (unsigned char)68;
unsigned char var_4 = (unsigned char)24;
long long int var_8 = -5353068587918927092LL;
int zero = 0;
unsigned long long int var_14 = 8003897049291258513ULL;
unsigned long long int var_15 = 17217491800508800572ULL;
short var_16 = (short)30755;
unsigned long long int var_17 = 459953090934249972ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
