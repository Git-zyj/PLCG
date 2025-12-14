#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4572182253736466244LL;
long long int var_2 = 4333215578606344443LL;
unsigned short var_3 = (unsigned short)25535;
unsigned short var_4 = (unsigned short)19084;
unsigned char var_5 = (unsigned char)97;
unsigned int var_6 = 1352714933U;
unsigned long long int var_7 = 6579641820603490989ULL;
unsigned short var_8 = (unsigned short)21613;
unsigned short var_10 = (unsigned short)46515;
unsigned int var_12 = 779319021U;
int zero = 0;
unsigned long long int var_13 = 17733081930188492444ULL;
unsigned char var_14 = (unsigned char)254;
void init() {
}

void checksum() {
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
