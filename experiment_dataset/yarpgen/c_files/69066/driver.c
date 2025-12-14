#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46964;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-57;
unsigned short var_4 = (unsigned short)19906;
signed char var_5 = (signed char)-59;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)32446;
signed char var_10 = (signed char)30;
unsigned short var_11 = (unsigned short)17433;
int zero = 0;
unsigned short var_14 = (unsigned short)43616;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)22928;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
