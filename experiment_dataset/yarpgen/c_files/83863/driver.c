#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = 14809847;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)96;
unsigned short var_10 = (unsigned short)22833;
unsigned long long int var_11 = 16110158981438598513ULL;
unsigned long long int var_12 = 6100065336685951031ULL;
unsigned long long int var_13 = 5478429206776279717ULL;
unsigned long long int var_16 = 1626102375414198343ULL;
short var_17 = (short)9799;
unsigned char var_19 = (unsigned char)217;
int zero = 0;
unsigned char var_20 = (unsigned char)141;
signed char var_21 = (signed char)-66;
short var_22 = (short)-3115;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)24239;
signed char var_25 = (signed char)-94;
unsigned long long int var_26 = 1462335820747998361ULL;
unsigned long long int var_27 = 11679738386477685940ULL;
signed char arr_0 [18] ;
unsigned long long int arr_5 [21] ;
_Bool arr_6 [21] ;
signed char arr_8 [21] ;
unsigned long long int arr_10 [21] [21] ;
signed char arr_3 [18] ;
short arr_4 [18] ;
short arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)120 : (signed char)-89;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 16465108021404927970ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = 15492333142889934253ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)80 : (signed char)46;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-19534 : (short)-10079;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (short)-12182;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
