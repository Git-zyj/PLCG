#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9991;
unsigned short var_2 = (unsigned short)19630;
short var_3 = (short)31657;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-7091;
unsigned long long int var_7 = 9580010040219316483ULL;
unsigned long long int var_8 = 5186863297604598757ULL;
unsigned short var_9 = (unsigned short)16116;
int zero = 0;
unsigned short var_11 = (unsigned short)60840;
int var_12 = 1776940332;
unsigned long long int var_13 = 341004726884501297ULL;
unsigned short var_14 = (unsigned short)25565;
int var_15 = 1024867604;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
