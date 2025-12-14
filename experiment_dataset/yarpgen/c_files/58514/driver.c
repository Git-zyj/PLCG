#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3477569702U;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 1451932580999706876ULL;
_Bool var_9 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)52;
int var_16 = 1630593107;
unsigned int var_17 = 270018489U;
int zero = 0;
unsigned char var_18 = (unsigned char)169;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
int var_21 = 1322318845;
short var_22 = (short)21725;
unsigned int arr_1 [18] ;
signed char arr_2 [18] ;
unsigned char arr_3 [18] ;
_Bool arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3417011084U : 2717236872U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)24 : (signed char)13;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)212 : (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
