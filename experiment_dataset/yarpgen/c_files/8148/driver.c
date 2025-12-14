#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3964328050U;
_Bool var_1 = (_Bool)0;
long long int var_3 = 2978541583003642196LL;
unsigned long long int var_4 = 14633920618218664672ULL;
signed char var_5 = (signed char)29;
short var_6 = (short)-22873;
unsigned char var_7 = (unsigned char)76;
unsigned char var_10 = (unsigned char)9;
unsigned int var_12 = 2679827729U;
int zero = 0;
long long int var_16 = -3735724233154891427LL;
signed char var_17 = (signed char)-120;
unsigned int var_18 = 519098747U;
long long int var_19 = -362503192729511963LL;
long long int var_20 = 3875314441033043839LL;
signed char var_21 = (signed char)39;
unsigned short arr_1 [11] [11] ;
short arr_16 [14] [14] ;
unsigned short arr_17 [14] ;
_Bool arr_18 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)8295;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_16 [i_0] [i_1] = (short)3321;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (unsigned short)45740;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_18 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
