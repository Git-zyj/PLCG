#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1455168014845257701LL;
unsigned long long int var_2 = 4624366957825625684ULL;
unsigned char var_4 = (unsigned char)54;
unsigned long long int var_6 = 12907385984835406426ULL;
unsigned short var_10 = (unsigned short)3594;
unsigned short var_13 = (unsigned short)12485;
short var_15 = (short)27834;
signed char var_17 = (signed char)-115;
int var_18 = 119061269;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)202;
unsigned long long int var_22 = 10091185480669680415ULL;
signed char var_23 = (signed char)99;
void init() {
}

void checksum() {
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
