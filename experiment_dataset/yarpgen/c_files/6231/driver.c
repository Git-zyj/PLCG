#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_8 = (unsigned char)42;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)-94;
unsigned char var_13 = (unsigned char)228;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = -666702465;
short var_20 = (short)-11583;
short var_21 = (short)-31722;
void init() {
}

void checksum() {
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
