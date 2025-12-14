#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6093672461100219727LL;
unsigned short var_10 = (unsigned short)17113;
_Bool var_11 = (_Bool)0;
unsigned int var_15 = 2241735403U;
unsigned char var_19 = (unsigned char)232;
int zero = 0;
unsigned char var_20 = (unsigned char)200;
unsigned short var_21 = (unsigned short)12310;
int var_22 = -383140314;
unsigned int var_23 = 1774689526U;
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
