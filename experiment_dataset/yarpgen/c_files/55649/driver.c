#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6627718130217524769LL;
signed char var_3 = (signed char)53;
unsigned char var_5 = (unsigned char)125;
signed char var_6 = (signed char)48;
signed char var_7 = (signed char)88;
int var_8 = 853511657;
unsigned char var_10 = (unsigned char)220;
unsigned short var_11 = (unsigned short)25758;
unsigned char var_13 = (unsigned char)88;
int zero = 0;
signed char var_15 = (signed char)-122;
unsigned long long int var_16 = 12399205410800294455ULL;
unsigned char var_17 = (unsigned char)72;
int var_18 = -1024368782;
long long int var_19 = -630040646709630693LL;
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
