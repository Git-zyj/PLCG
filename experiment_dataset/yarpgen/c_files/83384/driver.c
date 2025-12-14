#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5756558055211251485ULL;
short var_8 = (short)3614;
_Bool var_9 = (_Bool)1;
unsigned long long int var_13 = 4763766035188060255ULL;
long long int var_16 = 5518521909057287980LL;
int zero = 0;
unsigned short var_18 = (unsigned short)25626;
unsigned char var_19 = (unsigned char)195;
long long int var_20 = -5330598973622222603LL;
long long int var_21 = 3116468750407371185LL;
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
