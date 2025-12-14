#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)160;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)197;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)248;
unsigned char var_14 = (unsigned char)202;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)162;
unsigned char var_17 = (unsigned char)137;
_Bool var_18 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1599840225U;
unsigned char var_21 = (unsigned char)153;
unsigned int var_22 = 115994386U;
unsigned int var_23 = 401265990U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
