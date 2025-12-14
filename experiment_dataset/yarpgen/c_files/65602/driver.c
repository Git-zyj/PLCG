#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7381243896421482604LL;
signed char var_1 = (signed char)-3;
unsigned long long int var_2 = 121043599135697821ULL;
long long int var_3 = -3718227641711295095LL;
long long int var_4 = 8785664900953240253LL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 1503785193448649306ULL;
long long int var_10 = 308290015949781607LL;
unsigned char var_13 = (unsigned char)173;
unsigned char var_17 = (unsigned char)42;
unsigned char var_19 = (unsigned char)66;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 1419155827;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)176;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
