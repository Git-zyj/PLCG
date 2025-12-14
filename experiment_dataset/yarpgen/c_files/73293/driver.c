#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14601;
unsigned char var_10 = (unsigned char)58;
unsigned char var_13 = (unsigned char)137;
long long int var_15 = 6032109363116703395LL;
unsigned short var_17 = (unsigned short)12819;
int var_19 = -378268292;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
int var_22 = -132715793;
int var_23 = -308759940;
_Bool var_24 = (_Bool)0;
int var_25 = -1108782941;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
