#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)252;
short var_2 = (short)-6190;
int var_3 = 2069559812;
long long int var_5 = -2390473114470395115LL;
short var_7 = (short)2769;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 5743305435024620128ULL;
short var_10 = (short)9313;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 8166094085048883625ULL;
long long int var_15 = -8180487873760128159LL;
signed char var_16 = (signed char)-113;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
