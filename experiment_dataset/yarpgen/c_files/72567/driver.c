#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13191508743023722882ULL;
_Bool var_1 = (_Bool)0;
long long int var_2 = 6326705806730702892LL;
unsigned int var_3 = 3297009759U;
unsigned long long int var_4 = 6008132586811112594ULL;
unsigned long long int var_5 = 9814844694398795521ULL;
unsigned char var_6 = (unsigned char)243;
long long int var_7 = 433870806091481360LL;
unsigned long long int var_9 = 8040992589437730130ULL;
int var_10 = -1002084181;
unsigned int var_11 = 180431543U;
signed char var_12 = (signed char)31;
int zero = 0;
long long int var_15 = -4026370708304876219LL;
long long int var_16 = -4997096959121684017LL;
signed char var_17 = (signed char)-28;
_Bool var_18 = (_Bool)1;
long long int var_19 = -2751772053705375590LL;
signed char var_20 = (signed char)-60;
short var_21 = (short)-3091;
short var_22 = (short)-6481;
signed char var_23 = (signed char)-66;
int var_24 = 2028415837;
unsigned char arr_0 [19] ;
short arr_1 [19] [19] ;
_Bool arr_2 [19] ;
long long int arr_7 [12] [12] [12] ;
unsigned long long int arr_8 [12] [12] ;
unsigned long long int arr_3 [19] ;
unsigned int arr_4 [19] ;
signed char arr_17 [12] ;
long long int arr_21 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (short)25972;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1724754530421182334LL : 8304711608045033019LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 3805853458607832486ULL : 6887326882238196759ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 1138101486488828304ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 1146977025U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (signed char)-64;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_21 [i_0] = -6317873426119578978LL;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
