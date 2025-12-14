#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1713597005;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)1;
int var_8 = -657254251;
unsigned short var_11 = (unsigned short)59505;
signed char var_14 = (signed char)-103;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)66;
int zero = 0;
unsigned short var_18 = (unsigned short)23600;
unsigned short var_19 = (unsigned short)33099;
void init() {
}

void checksum() {
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
