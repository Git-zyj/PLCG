#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6239;
unsigned short var_2 = (unsigned short)62527;
unsigned short var_3 = (unsigned short)63467;
unsigned short var_4 = (unsigned short)60178;
unsigned short var_7 = (unsigned short)10639;
unsigned short var_10 = (unsigned short)14472;
unsigned short var_12 = (unsigned short)54450;
unsigned short var_17 = (unsigned short)12730;
unsigned short var_19 = (unsigned short)34039;
int zero = 0;
unsigned short var_20 = (unsigned short)25127;
unsigned short var_21 = (unsigned short)14348;
unsigned short var_22 = (unsigned short)44769;
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
