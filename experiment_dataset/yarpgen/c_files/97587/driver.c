#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 839051016590695559LL;
unsigned short var_1 = (unsigned short)360;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)74;
long long int var_5 = -3571746385956204806LL;
unsigned long long int var_7 = 8056645806321252237ULL;
signed char var_9 = (signed char)63;
unsigned short var_10 = (unsigned short)17292;
long long int var_11 = 7040289273266246349LL;
int zero = 0;
unsigned short var_12 = (unsigned short)34661;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2524212300U;
unsigned long long int var_15 = 7512084636184297459ULL;
void init() {
}

void checksum() {
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
