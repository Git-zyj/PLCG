#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -292571352;
unsigned char var_2 = (unsigned char)144;
int var_3 = 1647399916;
unsigned int var_4 = 3120447526U;
unsigned char var_6 = (unsigned char)12;
long long int var_8 = -8045798509380990464LL;
int var_9 = 1752799892;
int zero = 0;
unsigned int var_12 = 211946113U;
int var_13 = -1788451722;
signed char var_14 = (signed char)-122;
int var_15 = 707877259;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
