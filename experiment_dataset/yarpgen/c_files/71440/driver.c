#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1846843445U;
_Bool var_7 = (_Bool)0;
int var_10 = -465103802;
long long int var_11 = -1692689415227342023LL;
int var_13 = -1849598001;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)90;
unsigned short var_18 = (unsigned short)9404;
unsigned long long int var_19 = 14951695158957351704ULL;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)27874;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)181;
unsigned long long int arr_0 [19] ;
unsigned short arr_1 [19] ;
long long int arr_2 [19] ;
long long int arr_6 [13] ;
unsigned short arr_7 [13] [13] ;
signed char arr_9 [13] [13] ;
signed char arr_3 [19] ;
int arr_21 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 16395956652180070686ULL : 804413304435305132ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)41470;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -7904199954974337373LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 3359811139807806857LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)11981;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-24 : (signed char)108;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_21 [i_0] = 911553405;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
