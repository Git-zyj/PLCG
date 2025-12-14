#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)86;
long long int var_7 = -2349380442752315090LL;
unsigned char var_8 = (unsigned char)210;
signed char var_11 = (signed char)19;
unsigned long long int var_12 = 10161421107257505186ULL;
unsigned long long int var_13 = 4276627212811663806ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)27154;
unsigned int var_16 = 1015597943U;
unsigned short var_17 = (unsigned short)58466;
unsigned int var_18 = 768565267U;
long long int var_19 = 6633066769049236162LL;
unsigned short var_20 = (unsigned short)12278;
unsigned int var_21 = 2700175847U;
unsigned int var_22 = 384395666U;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)27736;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)58;
unsigned long long int var_27 = 2235498262600686738ULL;
unsigned long long int arr_0 [17] ;
unsigned long long int arr_4 [17] [17] ;
short arr_6 [22] ;
long long int arr_7 [22] ;
unsigned int arr_8 [22] ;
unsigned short arr_10 [21] ;
unsigned long long int arr_13 [21] ;
_Bool arr_15 [21] ;
signed char arr_9 [22] ;
unsigned int arr_12 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1692473013305836617ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 9818499816400810254ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)26719 : (short)-20172;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = -3803703685070234884LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1283302045U : 1635374422U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (unsigned short)61907;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = 14887923556708756907ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)-9 : (signed char)-53;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = 1065219930U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
