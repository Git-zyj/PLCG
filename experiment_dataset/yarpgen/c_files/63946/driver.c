#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55231;
_Bool var_3 = (_Bool)0;
int var_5 = 1060542597;
unsigned short var_6 = (unsigned short)20673;
int var_7 = 702354190;
int var_9 = 843679231;
unsigned int var_12 = 2630280641U;
long long int var_13 = 3962384720643948876LL;
unsigned char var_14 = (unsigned char)195;
int zero = 0;
long long int var_16 = -5170761492845123421LL;
unsigned long long int var_17 = 13111344225415681958ULL;
unsigned short var_18 = (unsigned short)21995;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
