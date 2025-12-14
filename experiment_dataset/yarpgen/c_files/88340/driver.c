#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12376;
unsigned short var_2 = (unsigned short)18363;
unsigned short var_3 = (unsigned short)59163;
unsigned short var_5 = (unsigned short)36078;
unsigned short var_6 = (unsigned short)22423;
unsigned short var_7 = (unsigned short)15300;
unsigned short var_9 = (unsigned short)62633;
unsigned short var_10 = (unsigned short)59792;
int zero = 0;
unsigned short var_11 = (unsigned short)11314;
unsigned short var_12 = (unsigned short)32494;
unsigned short var_13 = (unsigned short)55204;
unsigned short var_14 = (unsigned short)59260;
unsigned short var_15 = (unsigned short)4010;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
