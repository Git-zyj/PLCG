#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -161418673;
long long int var_7 = 2722899234275330919LL;
unsigned char var_9 = (unsigned char)206;
long long int var_16 = -6535471373012869489LL;
int zero = 0;
long long int var_19 = -6632073683348711293LL;
unsigned short var_20 = (unsigned short)35252;
long long int var_21 = 4181463799114580893LL;
signed char var_22 = (signed char)90;
void init() {
}

void checksum() {
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
