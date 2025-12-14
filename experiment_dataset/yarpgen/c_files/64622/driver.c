#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 854836336U;
unsigned char var_4 = (unsigned char)21;
unsigned int var_7 = 2319146214U;
long long int var_8 = -3446272619348297110LL;
short var_9 = (short)-20194;
unsigned short var_10 = (unsigned short)10180;
unsigned short var_11 = (unsigned short)12223;
int zero = 0;
short var_13 = (short)-1406;
unsigned short var_14 = (unsigned short)19288;
long long int var_15 = 4095455568079864810LL;
void init() {
}

void checksum() {
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
