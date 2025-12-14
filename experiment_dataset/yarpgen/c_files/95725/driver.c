#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2378992182U;
signed char var_2 = (signed char)-85;
unsigned short var_3 = (unsigned short)16025;
int var_6 = 136812013;
unsigned long long int var_8 = 11041078882839470027ULL;
int var_9 = -464924704;
short var_11 = (short)13261;
_Bool var_13 = (_Bool)1;
long long int var_14 = -7043093968711048346LL;
int var_15 = -147405003;
int zero = 0;
unsigned long long int var_17 = 9348158845955725798ULL;
int var_18 = -1382149351;
short var_19 = (short)30842;
unsigned short var_20 = (unsigned short)53423;
signed char var_21 = (signed char)61;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)132;
_Bool var_25 = (_Bool)0;
long long int arr_1 [11] ;
unsigned long long int arr_3 [11] ;
long long int arr_7 [22] ;
unsigned char arr_8 [22] ;
unsigned long long int arr_9 [22] [22] ;
unsigned char arr_6 [11] [11] ;
int arr_12 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 7378887779555927784LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 15252783683108217238ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = -5143067184600447655LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = 5148749114019695592ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)167 : (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = 1234737751;
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
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
