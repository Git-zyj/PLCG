#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)249;
long long int var_1 = 5781501289271600065LL;
signed char var_5 = (signed char)80;
long long int var_6 = 1477349847183200697LL;
signed char var_7 = (signed char)-8;
unsigned short var_9 = (unsigned short)50060;
int var_10 = 668074802;
unsigned char var_12 = (unsigned char)17;
long long int var_14 = -7658199362584674288LL;
short var_15 = (short)7272;
int zero = 0;
long long int var_19 = 4225685711935288274LL;
long long int var_20 = 5799922285300333811LL;
unsigned char var_21 = (unsigned char)212;
unsigned char var_22 = (unsigned char)100;
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
