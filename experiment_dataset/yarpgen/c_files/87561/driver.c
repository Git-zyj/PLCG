#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-87;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)16861;
short var_5 = (short)-18105;
unsigned long long int var_7 = 2409058467910690195ULL;
unsigned int var_10 = 1345514455U;
unsigned int var_14 = 838568471U;
unsigned long long int var_15 = 13194683898080985362ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 13640041939323678702ULL;
unsigned long long int var_21 = 12325270495029586334ULL;
int var_22 = 1596680727;
unsigned short var_23 = (unsigned short)52843;
unsigned long long int var_24 = 158620819685747204ULL;
signed char var_25 = (signed char)80;
int arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 507534564;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
