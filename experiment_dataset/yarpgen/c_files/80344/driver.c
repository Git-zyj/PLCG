#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)188;
unsigned int var_1 = 4054677704U;
unsigned long long int var_2 = 130034402289331501ULL;
unsigned short var_3 = (unsigned short)27993;
unsigned int var_4 = 3410130748U;
_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)1;
long long int var_9 = -3319833198452855383LL;
_Bool var_10 = (_Bool)1;
short var_11 = (short)8479;
signed char var_12 = (signed char)-62;
short var_13 = (short)3477;
long long int var_14 = 4821354814545711368LL;
unsigned short var_15 = (unsigned short)38269;
unsigned long long int var_16 = 4288290994350313710ULL;
int zero = 0;
unsigned int var_17 = 282445460U;
long long int var_18 = -5135487284925811701LL;
signed char var_19 = (signed char)-108;
_Bool var_20 = (_Bool)1;
short var_21 = (short)14765;
int var_22 = 655440056;
unsigned short var_23 = (unsigned short)48420;
int var_24 = 539541521;
signed char arr_1 [12] ;
short arr_2 [12] ;
unsigned int arr_4 [12] [12] ;
_Bool arr_5 [12] [12] ;
int arr_9 [20] ;
unsigned short arr_3 [12] ;
unsigned char arr_6 [12] ;
unsigned long long int arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-56;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)-24016;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 1861175470U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = 603589811;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)28618;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 16505741298260421863ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
