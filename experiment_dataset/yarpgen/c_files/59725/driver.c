#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27824;
int var_2 = -215441259;
unsigned short var_3 = (unsigned short)30711;
signed char var_4 = (signed char)-10;
int var_6 = -791490531;
long long int var_8 = 8622716644781176304LL;
unsigned long long int var_9 = 1121885182564081676ULL;
long long int var_10 = 6359637741582817722LL;
short var_12 = (short)-26846;
int zero = 0;
unsigned char var_13 = (unsigned char)161;
unsigned long long int var_14 = 8134209371365846282ULL;
unsigned char var_15 = (unsigned char)179;
short var_16 = (short)28767;
int var_17 = -1332531718;
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
