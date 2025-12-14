#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14426157564075217375ULL;
unsigned short var_3 = (unsigned short)61073;
unsigned long long int var_6 = 16896073191950142537ULL;
long long int var_8 = -7898563344042390444LL;
unsigned short var_9 = (unsigned short)47825;
long long int var_11 = -395787185208392479LL;
unsigned short var_12 = (unsigned short)28999;
int zero = 0;
int var_15 = 1611758408;
unsigned short var_16 = (unsigned short)9165;
void init() {
}

void checksum() {
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
