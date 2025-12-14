#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)179;
_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)63;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned char var_15 = (unsigned char)95;
signed char var_16 = (signed char)70;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-74;
signed char var_22 = (signed char)93;
unsigned char var_23 = (unsigned char)39;
unsigned char var_24 = (unsigned char)253;
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
