#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)236;
unsigned char var_1 = (unsigned char)86;
unsigned int var_2 = 1958687116U;
unsigned int var_3 = 3750789831U;
_Bool var_5 = (_Bool)1;
int var_7 = 169241131;
unsigned long long int var_8 = 6625654047165939821ULL;
unsigned short var_9 = (unsigned short)63157;
int zero = 0;
short var_10 = (short)746;
unsigned long long int var_11 = 12633155449399132152ULL;
unsigned long long int var_12 = 18364121602170080528ULL;
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
