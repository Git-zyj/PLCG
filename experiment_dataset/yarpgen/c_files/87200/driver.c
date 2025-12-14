#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 232438815;
unsigned short var_2 = (unsigned short)43283;
int var_3 = -404779647;
unsigned long long int var_4 = 15326745804487342385ULL;
unsigned char var_6 = (unsigned char)206;
signed char var_7 = (signed char)-3;
unsigned int var_8 = 451835082U;
int zero = 0;
long long int var_11 = -5406080889392050126LL;
unsigned int var_12 = 4110689548U;
unsigned short var_13 = (unsigned short)42240;
unsigned char var_14 = (unsigned char)88;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
