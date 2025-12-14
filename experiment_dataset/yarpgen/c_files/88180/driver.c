#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6457133126433710044LL;
unsigned short var_1 = (unsigned short)56433;
unsigned char var_2 = (unsigned char)183;
int var_3 = -300699024;
unsigned char var_4 = (unsigned char)211;
int var_5 = -492574102;
unsigned char var_6 = (unsigned char)3;
int var_7 = -662376116;
unsigned short var_9 = (unsigned short)15523;
int zero = 0;
unsigned short var_10 = (unsigned short)46343;
int var_11 = 993050191;
int var_12 = 763311412;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
