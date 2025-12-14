#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2140530551892336002LL;
unsigned char var_1 = (unsigned char)182;
long long int var_4 = -2332663242751500899LL;
long long int var_5 = 3165679426767178846LL;
short var_6 = (short)9582;
short var_8 = (short)30212;
unsigned char var_9 = (unsigned char)195;
unsigned char var_10 = (unsigned char)190;
unsigned int var_12 = 267998803U;
unsigned long long int var_13 = 5624766953327533460ULL;
int zero = 0;
int var_14 = 2001097637;
unsigned short var_15 = (unsigned short)28423;
unsigned long long int var_16 = 16191596217938671435ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
