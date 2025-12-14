#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42058;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 11745079917430144890ULL;
_Bool var_4 = (_Bool)1;
long long int var_5 = 3166449257681559658LL;
unsigned int var_6 = 4110274833U;
unsigned short var_7 = (unsigned short)19730;
int var_9 = 323814670;
short var_11 = (short)24461;
int zero = 0;
int var_12 = 2052065200;
unsigned int var_13 = 3768878289U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
