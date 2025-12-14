#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 12496073757536241957ULL;
unsigned char var_4 = (unsigned char)207;
long long int var_5 = -3439056421469517719LL;
unsigned int var_6 = 2100793633U;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 794897750U;
int var_13 = 931431840;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 9613672361516259335ULL;
int zero = 0;
long long int var_16 = -5761057880102058013LL;
unsigned long long int var_17 = 10487721138954223597ULL;
unsigned long long int var_18 = 15485523110065025555ULL;
unsigned char var_19 = (unsigned char)26;
long long int var_20 = 5044084500425047114LL;
short var_21 = (short)13312;
long long int arr_0 [18] ;
long long int arr_3 [18] [18] [18] ;
long long int arr_4 [18] ;
unsigned long long int arr_5 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 3574988124507862604LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -8567173186522136075LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 3686999749267021721LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 14470907521319376358ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
