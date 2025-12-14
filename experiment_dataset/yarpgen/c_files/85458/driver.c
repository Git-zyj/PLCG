#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8077580510746431187LL;
signed char var_2 = (signed char)13;
signed char var_5 = (signed char)-115;
short var_6 = (short)31088;
long long int var_7 = 8786861907482901861LL;
int var_8 = -1270772689;
long long int var_9 = -3230144450406950999LL;
int var_11 = 1042996415;
unsigned long long int var_12 = 1922777189567284201ULL;
int zero = 0;
short var_13 = (short)-23747;
long long int var_14 = -2693374351461950039LL;
int var_15 = -574997833;
signed char var_16 = (signed char)34;
unsigned long long int var_17 = 17771381579474240743ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
