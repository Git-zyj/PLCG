#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-15887;
_Bool var_5 = (_Bool)0;
long long int var_7 = -2065507658727241596LL;
unsigned long long int var_9 = 14719581797021228710ULL;
long long int var_12 = 1569230221128072934LL;
unsigned short var_13 = (unsigned short)32147;
int var_15 = 569503002;
unsigned short var_16 = (unsigned short)60192;
unsigned short var_18 = (unsigned short)43883;
int zero = 0;
unsigned short var_19 = (unsigned short)22132;
int var_20 = 335484026;
unsigned short var_21 = (unsigned short)46991;
int var_22 = -4962290;
signed char var_23 = (signed char)109;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
