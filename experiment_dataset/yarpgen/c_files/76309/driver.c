#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1945670508;
_Bool var_2 = (_Bool)0;
long long int var_4 = 2500436912192616067LL;
short var_5 = (short)-12122;
long long int var_6 = -296719536287481939LL;
long long int var_7 = -5937528210312160123LL;
unsigned char var_10 = (unsigned char)181;
unsigned long long int var_11 = 6587142655282021893ULL;
unsigned short var_12 = (unsigned short)16923;
unsigned short var_13 = (unsigned short)64990;
long long int var_14 = 6276185892990563789LL;
int zero = 0;
unsigned long long int var_15 = 8672470002234555317ULL;
long long int var_16 = -3231793215021981451LL;
int var_17 = 1218769383;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 16069717028585197607ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
