#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5926201806422571013LL;
short var_1 = (short)-8960;
int var_2 = -276897772;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1777871444U;
unsigned char var_8 = (unsigned char)240;
int var_9 = 65870121;
signed char var_10 = (signed char)-126;
short var_11 = (short)137;
int var_12 = 2026772445;
int var_14 = 852065025;
signed char var_15 = (signed char)98;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_18 = 2020769803;
unsigned int var_19 = 3541025072U;
short var_20 = (short)-19727;
unsigned long long int var_21 = 2950624255702966746ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
