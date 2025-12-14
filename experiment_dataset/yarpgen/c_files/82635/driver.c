#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)73;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3396436997U;
unsigned short var_7 = (unsigned short)58019;
unsigned short var_11 = (unsigned short)30105;
unsigned char var_13 = (unsigned char)213;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)65411;
signed char var_21 = (signed char)-51;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)99;
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
