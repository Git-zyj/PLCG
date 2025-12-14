#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)35647;
_Bool var_6 = (_Bool)1;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)34;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-111;
signed char var_22 = (signed char)-8;
void init() {
}

void checksum() {
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
