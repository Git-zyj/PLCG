#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-42;
short var_4 = (short)-28055;
unsigned long long int var_5 = 16045081423358370469ULL;
unsigned short var_7 = (unsigned short)33926;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-2114;
unsigned long long int var_11 = 6925779389488175352ULL;
int zero = 0;
int var_12 = -305569620;
short var_13 = (short)-16188;
short var_14 = (short)-18577;
signed char var_15 = (signed char)-38;
unsigned short var_16 = (unsigned short)47835;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 8139516580527139803ULL;
unsigned int arr_6 [22] ;
unsigned short arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 597174758U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned short)8105;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
