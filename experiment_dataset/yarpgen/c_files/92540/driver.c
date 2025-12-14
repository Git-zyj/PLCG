#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-121;
short var_4 = (short)12661;
long long int var_6 = 4556151538734444407LL;
signed char var_7 = (signed char)-14;
unsigned long long int var_8 = 5603505490957777688ULL;
signed char var_10 = (signed char)43;
int var_11 = -1038222562;
signed char var_12 = (signed char)121;
int zero = 0;
long long int var_13 = 881262909146747665LL;
unsigned char var_14 = (unsigned char)233;
unsigned long long int var_15 = 7353770560688371297ULL;
int var_16 = -479867990;
signed char var_17 = (signed char)86;
unsigned long long int var_18 = 7675568550142138583ULL;
long long int arr_1 [12] ;
unsigned int arr_2 [12] [12] ;
signed char arr_5 [12] ;
_Bool arr_6 [12] ;
signed char arr_4 [12] ;
unsigned int arr_7 [12] ;
short arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 3364234957457201213LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 2982550804U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 3971907521U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (short)-28747;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
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
