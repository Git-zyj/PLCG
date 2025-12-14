#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1136094696;
long long int var_1 = -3721810584551943276LL;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)128;
signed char var_8 = (signed char)-112;
unsigned char var_10 = (unsigned char)252;
long long int var_13 = -3538799386106820554LL;
int var_19 = -938851605;
int zero = 0;
unsigned char var_20 = (unsigned char)14;
signed char var_21 = (signed char)51;
int var_22 = -528244805;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
