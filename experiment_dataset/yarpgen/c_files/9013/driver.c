#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)40448;
unsigned short var_7 = (unsigned short)43713;
unsigned char var_14 = (unsigned char)176;
unsigned long long int var_18 = 4041160068606755321ULL;
int zero = 0;
long long int var_20 = -1003169291784358351LL;
int var_21 = -2013143779;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
