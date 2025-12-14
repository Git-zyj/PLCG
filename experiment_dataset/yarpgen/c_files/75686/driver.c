#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)3147;
long long int var_4 = 1068891881241778229LL;
int var_10 = -1477850698;
long long int var_14 = 8422410726593064184LL;
short var_15 = (short)832;
int zero = 0;
unsigned int var_19 = 2286634425U;
unsigned short var_20 = (unsigned short)28455;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1737744178U;
unsigned int var_23 = 2185410561U;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)226;
unsigned long long int var_26 = 13771935626673649686ULL;
signed char var_27 = (signed char)57;
unsigned long long int var_28 = 17235194036064782608ULL;
long long int var_29 = -5033629011608609894LL;
_Bool arr_0 [18] ;
unsigned long long int arr_1 [18] ;
unsigned long long int arr_2 [18] ;
short arr_3 [18] ;
unsigned long long int arr_10 [24] ;
int arr_11 [24] ;
int arr_12 [24] ;
unsigned int arr_4 [18] [18] ;
unsigned long long int arr_9 [14] ;
unsigned int arr_13 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 5040762456570104287ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 17573736595182885815ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)31578;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 123474657981005961ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = 1794769140;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = -1418728400;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 1399888292U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 14798086254487987242ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = 1039962092U;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
