#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3335474288U;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-25;
unsigned char var_3 = (unsigned char)197;
_Bool var_4 = (_Bool)1;
signed char var_8 = (signed char)32;
long long int var_10 = -3616211319831300098LL;
unsigned char var_12 = (unsigned char)173;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 12266674069620960200ULL;
int zero = 0;
int var_16 = -1662493450;
unsigned long long int var_17 = 15770377120751577325ULL;
signed char var_18 = (signed char)-94;
long long int var_19 = -8456150833463222372LL;
signed char var_20 = (signed char)-96;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
