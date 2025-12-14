#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1552080194U;
unsigned long long int var_3 = 18032889688996054428ULL;
long long int var_6 = 3056295849869998619LL;
unsigned int var_11 = 1573294604U;
unsigned char var_13 = (unsigned char)61;
unsigned int var_14 = 2875465766U;
int var_15 = 1373280093;
int zero = 0;
unsigned int var_17 = 2896087982U;
unsigned long long int var_18 = 12907205932574387386ULL;
unsigned short var_19 = (unsigned short)53497;
signed char var_20 = (signed char)82;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
