#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1462944437155051799ULL;
long long int var_3 = 4439473344608606224LL;
unsigned char var_4 = (unsigned char)118;
unsigned char var_7 = (unsigned char)84;
long long int var_10 = -7507100652920884023LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 2566990890986837171ULL;
unsigned long long int var_13 = 8851961554012635028ULL;
unsigned long long int var_14 = 6054047208034819365ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
