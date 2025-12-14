#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)12960;
unsigned long long int var_4 = 17450109332840386623ULL;
long long int var_5 = -474221050556845165LL;
unsigned char var_6 = (unsigned char)199;
long long int var_8 = -3750019626022076382LL;
unsigned long long int var_11 = 15498992346039021807ULL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 11814215189400367670ULL;
unsigned long long int var_16 = 4823542836189872673ULL;
int zero = 0;
long long int var_17 = -1887416966032913852LL;
short var_18 = (short)17562;
unsigned long long int var_19 = 5481728835240055346ULL;
int var_20 = -909241365;
unsigned char var_21 = (unsigned char)115;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
