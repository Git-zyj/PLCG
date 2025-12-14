#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13008;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned long long int var_8 = 4967070798694373493ULL;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)-78;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int var_17 = -122970470;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_19 = (short)-7667;
unsigned long long int var_20 = 9303726898966726750ULL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)56;
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
