#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17673170894136251347ULL;
unsigned short var_2 = (unsigned short)51454;
int var_7 = 1227733491;
unsigned short var_9 = (unsigned short)1443;
unsigned short var_11 = (unsigned short)12696;
unsigned long long int var_14 = 13226331472524271665ULL;
int zero = 0;
unsigned int var_18 = 1389361784U;
unsigned char var_19 = (unsigned char)186;
unsigned char var_20 = (unsigned char)140;
long long int var_21 = 256320453051380481LL;
int var_22 = 31732735;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
