#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2525408364428319444LL;
int var_2 = -741633148;
unsigned short var_5 = (unsigned short)52916;
short var_8 = (short)-6200;
_Bool var_9 = (_Bool)0;
int var_11 = 1053195663;
unsigned long long int var_12 = 7143587549460117080ULL;
short var_14 = (short)32635;
unsigned long long int var_15 = 11132558092736591977ULL;
int zero = 0;
signed char var_18 = (signed char)-45;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)54229;
short var_21 = (short)-9866;
unsigned char var_22 = (unsigned char)252;
unsigned long long int arr_1 [25] ;
short arr_3 [25] [25] ;
int arr_4 [25] [25] ;
short arr_5 [25] ;
signed char arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 2256787589863335087ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-17792;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 2118271604;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (short)-28932;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (signed char)87;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
