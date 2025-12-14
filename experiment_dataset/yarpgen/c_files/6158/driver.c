#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 7861248776617656435ULL;
unsigned long long int var_7 = 14666241683791846240ULL;
unsigned char var_9 = (unsigned char)95;
unsigned int var_12 = 3859888154U;
unsigned char var_14 = (unsigned char)178;
unsigned char var_15 = (unsigned char)234;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)102;
unsigned int var_21 = 33089057U;
unsigned int var_22 = 3935118383U;
short var_23 = (short)22606;
unsigned char var_24 = (unsigned char)87;
unsigned char var_25 = (unsigned char)130;
unsigned short var_26 = (unsigned short)1412;
unsigned int var_27 = 3652883790U;
unsigned long long int var_28 = 5239138759146352489ULL;
unsigned short var_29 = (unsigned short)326;
unsigned int var_30 = 3603652325U;
unsigned short var_31 = (unsigned short)49053;
unsigned char arr_0 [13] [13] ;
unsigned char arr_1 [13] [13] ;
_Bool arr_3 [13] ;
_Bool arr_4 [13] ;
unsigned short arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned short)4277;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
