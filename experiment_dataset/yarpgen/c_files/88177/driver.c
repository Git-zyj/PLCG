#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6610892243914137252LL;
unsigned long long int var_6 = 13234351629551944586ULL;
short var_11 = (short)-13907;
long long int var_14 = -6002311739179232531LL;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2198885654U;
unsigned short var_17 = (unsigned short)46532;
long long int var_19 = -808818146998729681LL;
int zero = 0;
unsigned char var_20 = (unsigned char)232;
short var_21 = (short)3804;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)18740;
unsigned char var_24 = (unsigned char)145;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
