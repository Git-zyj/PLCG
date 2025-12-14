#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)18;
unsigned short var_2 = (unsigned short)3525;
unsigned long long int var_3 = 11889853788936653013ULL;
unsigned int var_4 = 240789591U;
unsigned long long int var_5 = 4764236758889841878ULL;
int var_7 = -1404340707;
_Bool var_11 = (_Bool)0;
long long int var_12 = 8301841472794173115LL;
unsigned char var_16 = (unsigned char)175;
unsigned char var_19 = (unsigned char)212;
int zero = 0;
unsigned char var_20 = (unsigned char)120;
signed char var_21 = (signed char)-102;
unsigned int var_22 = 2853422246U;
unsigned short var_23 = (unsigned short)41018;
unsigned int var_24 = 1019714485U;
int var_25 = 1660377205;
signed char var_26 = (signed char)105;
unsigned int var_27 = 515883511U;
int var_28 = 764270655;
int var_29 = -1304237529;
unsigned char var_30 = (unsigned char)74;
long long int arr_1 [11] [11] ;
int arr_5 [11] [11] ;
unsigned long long int arr_12 [10] ;
signed char arr_16 [11] ;
_Bool arr_17 [11] ;
unsigned char arr_20 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? -7484130958344261199LL : -406534674421405108LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -1193779635 : -1547010435;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 10157291614025006676ULL : 1714561994601458429ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = (unsigned char)145;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
