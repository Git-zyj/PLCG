#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11678587086518174276ULL;
unsigned long long int var_4 = 14361061212807387719ULL;
unsigned char var_5 = (unsigned char)241;
unsigned long long int var_7 = 14165958731258518653ULL;
long long int var_8 = -2850456117291465522LL;
unsigned long long int var_9 = 9739492113024265330ULL;
unsigned long long int var_10 = 14012147914093177465ULL;
int var_11 = 1522270589;
unsigned long long int var_13 = 12442814669522885038ULL;
unsigned char var_15 = (unsigned char)0;
int zero = 0;
unsigned char var_16 = (unsigned char)1;
short var_17 = (short)2374;
void init() {
}

void checksum() {
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
