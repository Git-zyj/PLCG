#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1438006283;
unsigned int var_1 = 1137722138U;
unsigned long long int var_2 = 9927561809913239424ULL;
unsigned short var_3 = (unsigned short)42101;
unsigned char var_4 = (unsigned char)229;
int var_7 = 473709964;
unsigned long long int var_8 = 2594617045640777769ULL;
unsigned int var_9 = 3080057353U;
int var_10 = 1166490661;
unsigned long long int var_12 = 9889134841687073196ULL;
unsigned char var_13 = (unsigned char)160;
long long int var_14 = 4293670167680274525LL;
int zero = 0;
int var_15 = -19781923;
unsigned long long int var_16 = 12037045923024694405ULL;
int var_17 = -678366346;
void init() {
}

void checksum() {
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
