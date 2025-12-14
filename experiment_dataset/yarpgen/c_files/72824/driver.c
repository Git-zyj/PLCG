#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 644156022U;
unsigned int var_3 = 3520332943U;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)22054;
unsigned int var_11 = 3721747128U;
unsigned long long int var_15 = 7108093060108698002ULL;
unsigned long long int var_16 = 18305147110365524492ULL;
int zero = 0;
unsigned int var_19 = 3208674150U;
unsigned short var_20 = (unsigned short)3506;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
