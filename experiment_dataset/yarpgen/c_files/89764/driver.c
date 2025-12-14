#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)104;
int var_2 = -2102534224;
unsigned int var_3 = 3760987979U;
unsigned short var_5 = (unsigned short)16144;
unsigned char var_9 = (unsigned char)223;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 205481122U;
unsigned short var_15 = (unsigned short)42331;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 10051283691074104922ULL;
unsigned char var_20 = (unsigned char)143;
unsigned char var_21 = (unsigned char)35;
unsigned char var_22 = (unsigned char)253;
void init() {
}

void checksum() {
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
