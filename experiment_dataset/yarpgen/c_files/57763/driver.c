#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int zero = 0;
int var_19 = -1647440240;
signed char var_20 = (signed char)-5;
signed char var_21 = (signed char)72;
signed char var_22 = (signed char)-112;
unsigned char var_23 = (unsigned char)20;
int var_24 = -2141537989;
long long int var_25 = -2483280933645171367LL;
signed char var_26 = (signed char)-122;
unsigned char var_27 = (unsigned char)247;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
