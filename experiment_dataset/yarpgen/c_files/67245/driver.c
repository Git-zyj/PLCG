#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1411229102747625981LL;
unsigned char var_1 = (unsigned char)84;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)7578;
int var_8 = 6127532;
long long int var_9 = -2628403923858882814LL;
signed char var_10 = (signed char)-12;
int zero = 0;
unsigned char var_12 = (unsigned char)130;
int var_13 = -803657846;
unsigned char var_14 = (unsigned char)34;
unsigned char var_15 = (unsigned char)22;
int var_16 = 1165521523;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
