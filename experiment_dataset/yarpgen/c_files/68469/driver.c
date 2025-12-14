#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17915;
unsigned long long int var_4 = 7625352886408684689ULL;
long long int var_8 = -2161687023530830509LL;
int zero = 0;
unsigned long long int var_10 = 5220830580057088570ULL;
unsigned long long int var_11 = 3963329445459897486ULL;
long long int var_12 = -4137920186963399841LL;
short var_13 = (short)-6157;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 7440334166201420994ULL;
short arr_0 [24] ;
_Bool arr_2 [24] ;
long long int arr_5 [19] ;
_Bool arr_8 [19] [19] [19] ;
unsigned long long int arr_3 [24] ;
unsigned long long int arr_9 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-24245 : (short)28293;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 8244466897240109719LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 13788122682457845230ULL : 11133678097404428810ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = 6975013839623366066ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
