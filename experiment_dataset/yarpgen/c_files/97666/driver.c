#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18847;
signed char var_2 = (signed char)-12;
unsigned char var_4 = (unsigned char)84;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 529948077U;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 569570732U;
int var_13 = 545001609;
unsigned int var_14 = 2656374392U;
int var_15 = -943771201;
int zero = 0;
long long int var_17 = 4185750239201849306LL;
long long int var_18 = -2066287290380663903LL;
unsigned char var_19 = (unsigned char)71;
void init() {
}

void checksum() {
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
