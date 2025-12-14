#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-21538;
long long int var_2 = -4011856882534863807LL;
short var_3 = (short)-16112;
unsigned short var_4 = (unsigned short)50974;
unsigned int var_5 = 3780067431U;
unsigned short var_6 = (unsigned short)15202;
unsigned int var_7 = 1136638280U;
unsigned short var_8 = (unsigned short)36858;
unsigned long long int var_9 = 4968303538614767911ULL;
unsigned long long int var_11 = 4557042876174666163ULL;
unsigned short var_12 = (unsigned short)63899;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)(-127 - 1);
int zero = 0;
unsigned int var_16 = 3762594707U;
int var_17 = -864799541;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)27994;
long long int var_20 = 9022264291280673335LL;
unsigned short var_21 = (unsigned short)22657;
int arr_0 [13] ;
signed char arr_1 [13] ;
unsigned int arr_4 [12] ;
unsigned int arr_5 [12] ;
_Bool arr_2 [13] ;
unsigned short arr_3 [13] ;
unsigned short arr_6 [12] ;
unsigned short arr_7 [12] ;
_Bool arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -2025151994;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 695340643U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 3398470556U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)20568;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned short)4714;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (unsigned short)48960;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
