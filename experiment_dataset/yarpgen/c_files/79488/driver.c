#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1003632205;
int var_1 = -350572552;
_Bool var_5 = (_Bool)1;
int var_12 = -81001772;
int zero = 0;
unsigned short var_19 = (unsigned short)4325;
int var_20 = 475358555;
signed char var_21 = (signed char)-116;
unsigned char var_22 = (unsigned char)48;
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
