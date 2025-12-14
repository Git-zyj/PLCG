#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13271079304058685194ULL;
short var_2 = (short)8288;
long long int var_11 = -3373129981103631425LL;
int var_12 = 1168015468;
unsigned int var_15 = 3865513616U;
int zero = 0;
short var_17 = (short)30221;
int var_18 = -380760680;
void init() {
}

void checksum() {
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
