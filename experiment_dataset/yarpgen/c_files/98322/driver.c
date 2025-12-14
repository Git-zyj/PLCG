#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19899;
short var_2 = (short)15248;
short var_3 = (short)-30511;
unsigned long long int var_4 = 7266532353518576733ULL;
unsigned long long int var_8 = 6824760633225938337ULL;
unsigned long long int var_10 = 14388382625147386607ULL;
int var_11 = -572317309;
unsigned int var_12 = 4015444924U;
short var_13 = (short)29901;
int zero = 0;
unsigned short var_14 = (unsigned short)56388;
short var_15 = (short)13001;
unsigned long long int var_16 = 866364447222791984ULL;
int var_17 = -1413102798;
void init() {
}

void checksum() {
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
