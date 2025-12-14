#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15893;
long long int var_1 = 6293146295217498577LL;
unsigned long long int var_2 = 6896658317374992213ULL;
int var_3 = -1418843315;
unsigned short var_5 = (unsigned short)41374;
unsigned char var_6 = (unsigned char)56;
signed char var_7 = (signed char)98;
unsigned int var_8 = 3851403804U;
long long int var_11 = -4154820375970314005LL;
long long int var_12 = 3593673415670897980LL;
int zero = 0;
long long int var_16 = 3617375434514284914LL;
short var_17 = (short)22956;
unsigned char var_18 = (unsigned char)10;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
