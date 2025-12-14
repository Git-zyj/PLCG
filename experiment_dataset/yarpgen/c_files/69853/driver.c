#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28688;
signed char var_3 = (signed char)29;
unsigned char var_4 = (unsigned char)96;
int var_6 = 1845095746;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 984136529242378002ULL;
signed char var_12 = (signed char)-10;
signed char var_13 = (signed char)-93;
unsigned int var_17 = 2535763428U;
unsigned long long int var_18 = 18021935677441590612ULL;
unsigned long long int var_19 = 6386709266568002286ULL;
int zero = 0;
short var_20 = (short)25070;
signed char var_21 = (signed char)47;
long long int var_22 = -6829892302525944037LL;
int var_23 = 68311674;
_Bool var_24 = (_Bool)1;
int var_25 = 284195559;
signed char var_26 = (signed char)-31;
unsigned long long int var_27 = 10102554255056384183ULL;
int var_28 = -745467736;
short arr_0 [25] ;
_Bool arr_1 [25] [25] ;
_Bool arr_2 [25] [25] ;
_Bool arr_3 [25] [25] ;
_Bool arr_6 [21] [21] ;
signed char arr_9 [11] ;
short arr_10 [11] ;
unsigned char arr_12 [20] ;
signed char arr_15 [20] [20] ;
int arr_4 [25] ;
long long int arr_8 [21] ;
unsigned long long int arr_11 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)27994;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (short)-2117;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2147115396 : 1393994884;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = -8377537472971868690LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 15588674058731968355ULL : 11054451422602680845ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
