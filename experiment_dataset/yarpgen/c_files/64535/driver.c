#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -386969950478714782LL;
short var_4 = (short)23172;
int var_5 = -1470839932;
short var_7 = (short)-20879;
short var_12 = (short)-26205;
unsigned char var_14 = (unsigned char)22;
short var_15 = (short)12434;
unsigned char var_17 = (unsigned char)122;
int var_18 = 1938202664;
_Bool var_19 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)62475;
int var_22 = -84336626;
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
