#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2495145355620667962LL;
long long int var_1 = -5756926608426336973LL;
unsigned int var_5 = 1933934561U;
signed char var_8 = (signed char)27;
int var_10 = -1699344473;
int var_15 = -2048067592;
int var_16 = -1554229177;
int zero = 0;
signed char var_17 = (signed char)-111;
signed char var_18 = (signed char)-126;
short var_19 = (short)9622;
unsigned short var_20 = (unsigned short)56022;
short var_21 = (short)23373;
short var_22 = (short)28586;
unsigned long long int var_23 = 17538461189823423136ULL;
signed char arr_0 [15] ;
unsigned short arr_2 [15] ;
short arr_7 [25] ;
int arr_8 [25] ;
int arr_9 [25] ;
signed char arr_10 [24] ;
unsigned int arr_12 [24] [24] ;
unsigned short arr_4 [15] [15] ;
unsigned short arr_5 [15] ;
unsigned int arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)13471;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (short)4847;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = -1889003111;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 116954552;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = 2630664362U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)24397 : (unsigned short)37009;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)13724 : (unsigned short)61692;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 662875289U : 1210691231U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
