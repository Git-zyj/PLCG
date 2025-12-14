#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46612;
unsigned short var_3 = (unsigned short)61559;
unsigned long long int var_4 = 10831260372773407180ULL;
long long int var_5 = -4012679992306279295LL;
short var_7 = (short)15750;
int var_8 = 516093697;
int var_9 = -612392329;
unsigned long long int var_10 = 6557902640637731913ULL;
long long int var_11 = -571863094099763180LL;
long long int var_12 = -5775397313674958308LL;
int zero = 0;
int var_14 = 386798012;
short var_15 = (short)-21225;
long long int var_16 = -3470000632956272650LL;
short var_17 = (short)24634;
unsigned short var_18 = (unsigned short)33153;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
