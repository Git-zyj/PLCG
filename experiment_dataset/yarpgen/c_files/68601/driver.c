#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)172;
unsigned long long int var_2 = 15689598559886261287ULL;
unsigned long long int var_4 = 5036608987554362011ULL;
int var_8 = 1930246158;
unsigned long long int var_10 = 16036644069140521440ULL;
long long int var_12 = -3473533018814389787LL;
int zero = 0;
int var_16 = 648849499;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
