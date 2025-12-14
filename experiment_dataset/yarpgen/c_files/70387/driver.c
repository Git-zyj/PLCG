#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7798321774449349492LL;
unsigned char var_2 = (unsigned char)39;
unsigned char var_3 = (unsigned char)243;
signed char var_7 = (signed char)-114;
short var_10 = (short)-13672;
unsigned short var_13 = (unsigned short)2582;
unsigned short var_16 = (unsigned short)45550;
unsigned char var_18 = (unsigned char)35;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 1182051767U;
unsigned long long int var_21 = 17244070549933012337ULL;
unsigned long long int var_22 = 15745045624830958814ULL;
unsigned long long int var_23 = 8259418289032526829ULL;
short var_24 = (short)-5753;
unsigned long long int var_25 = 10324521560757645036ULL;
unsigned int var_26 = 459877546U;
_Bool var_27 = (_Bool)1;
long long int var_28 = 4674525390015356739LL;
unsigned short var_29 = (unsigned short)43054;
unsigned long long int var_30 = 13306675429405748397ULL;
signed char var_31 = (signed char)20;
unsigned int var_32 = 3068967284U;
long long int var_33 = 6199519784754216784LL;
unsigned char var_34 = (unsigned char)249;
unsigned long long int var_35 = 10453617916282028311ULL;
short arr_0 [18] [18] ;
long long int arr_2 [18] ;
unsigned int arr_8 [18] [18] [18] ;
_Bool arr_9 [18] ;
unsigned short arr_12 [18] [18] [18] [18] [18] [18] [18] ;
unsigned int arr_17 [18] [18] [18] [18] ;
_Bool arr_18 [20] ;
signed char arr_19 [20] ;
long long int arr_21 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-23097;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -40242474902423727LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 603011206U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)64738;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 534894707U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = 130868079458132675LL;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
