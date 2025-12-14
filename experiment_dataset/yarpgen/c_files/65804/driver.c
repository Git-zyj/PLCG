#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14091151732847772907ULL;
unsigned char var_2 = (unsigned char)172;
int var_9 = 2032746306;
unsigned short var_14 = (unsigned short)12140;
unsigned short var_16 = (unsigned short)14561;
int zero = 0;
unsigned char var_18 = (unsigned char)36;
unsigned short var_19 = (unsigned short)36264;
unsigned long long int var_20 = 13309900335846183658ULL;
int var_21 = -1554819395;
unsigned short var_22 = (unsigned short)48291;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
