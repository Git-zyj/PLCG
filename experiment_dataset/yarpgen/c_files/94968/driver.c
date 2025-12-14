#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59297;
unsigned long long int var_2 = 17199423482606815640ULL;
unsigned long long int var_5 = 6232298505413514936ULL;
unsigned long long int var_7 = 899113839764918136ULL;
int var_8 = -240365957;
unsigned char var_9 = (unsigned char)74;
int var_12 = -1901541055;
int var_13 = 302503112;
unsigned long long int var_17 = 8052480261979050667ULL;
int zero = 0;
int var_18 = 582681886;
unsigned short var_19 = (unsigned short)65105;
unsigned long long int var_20 = 17119991772511081393ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
