#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1166733248590696547LL;
signed char var_1 = (signed char)6;
unsigned char var_2 = (unsigned char)210;
int var_3 = 283672366;
unsigned long long int var_4 = 18146491654482084152ULL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
int var_7 = 974750355;
unsigned char var_9 = (unsigned char)62;
int var_10 = -529865326;
unsigned int var_13 = 735482326U;
int zero = 0;
long long int var_14 = 5564348648123784805LL;
unsigned int var_15 = 303134430U;
unsigned char var_16 = (unsigned char)71;
unsigned short var_17 = (unsigned short)63874;
long long int var_18 = 6976325700528442244LL;
unsigned int var_19 = 3221912164U;
int var_20 = 2090027961;
signed char var_21 = (signed char)-66;
_Bool arr_0 [23] [23] ;
_Bool arr_2 [23] ;
unsigned long long int arr_4 [23] [23] [23] ;
unsigned short arr_8 [18] ;
unsigned char arr_9 [18] [18] ;
unsigned short arr_11 [18] ;
unsigned char arr_12 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 10875292229582748469ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (unsigned short)48641;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (unsigned short)19268;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)222;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
