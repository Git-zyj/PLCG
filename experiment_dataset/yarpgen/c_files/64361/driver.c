#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2663796190U;
unsigned char var_3 = (unsigned char)93;
signed char var_4 = (signed char)8;
signed char var_6 = (signed char)-124;
short var_7 = (short)30296;
_Bool var_8 = (_Bool)1;
short var_9 = (short)3817;
unsigned int var_10 = 3625392521U;
signed char var_11 = (signed char)93;
short var_13 = (short)-12377;
unsigned short var_15 = (unsigned short)57891;
unsigned short var_16 = (unsigned short)43878;
int zero = 0;
signed char var_17 = (signed char)-99;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 30992172U;
signed char var_20 = (signed char)0;
unsigned int var_21 = 1073387969U;
int var_22 = -977779966;
unsigned char var_23 = (unsigned char)32;
unsigned int var_24 = 3224117786U;
unsigned char var_25 = (unsigned char)13;
unsigned char var_26 = (unsigned char)88;
long long int arr_0 [19] ;
unsigned char arr_1 [19] [19] ;
unsigned int arr_5 [19] ;
unsigned int arr_6 [19] [19] ;
unsigned short arr_8 [19] ;
short arr_3 [19] ;
int arr_4 [19] [19] ;
long long int arr_7 [19] ;
_Bool arr_12 [19] ;
_Bool arr_13 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 5315533595502847867LL : 152567744562774059LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)82 : (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 574382402U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 2887477843U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)37733 : (unsigned short)34476;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-15213 : (short)30870;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 1107811363 : 219611269;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 3469341333851701875LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
