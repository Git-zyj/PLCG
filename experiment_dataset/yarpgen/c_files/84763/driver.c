#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12092;
unsigned char var_3 = (unsigned char)236;
unsigned short var_4 = (unsigned short)56996;
unsigned long long int var_5 = 17499391369704266921ULL;
short var_10 = (short)5629;
signed char var_11 = (signed char)-74;
unsigned char var_15 = (unsigned char)150;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_17 = -120127890103640643LL;
short var_18 = (short)-15297;
unsigned long long int var_19 = 15710266699647816631ULL;
unsigned short var_20 = (unsigned short)51222;
_Bool var_21 = (_Bool)1;
int var_22 = 1826916143;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-17284;
_Bool var_25 = (_Bool)0;
unsigned int var_26 = 1843807267U;
long long int var_27 = -8188868260775969932LL;
unsigned short var_28 = (unsigned short)37941;
_Bool var_29 = (_Bool)0;
unsigned long long int var_30 = 14557733513353905912ULL;
unsigned char var_31 = (unsigned char)233;
short var_32 = (short)-32539;
unsigned short var_33 = (unsigned short)43137;
int var_34 = -396997014;
_Bool var_35 = (_Bool)1;
unsigned int var_36 = 3836430201U;
unsigned short arr_0 [20] ;
int arr_1 [20] ;
_Bool arr_2 [20] [20] [20] ;
_Bool arr_3 [20] ;
_Bool arr_4 [20] ;
unsigned short arr_9 [13] [13] ;
signed char arr_10 [13] ;
unsigned char arr_20 [13] [13] [13] ;
unsigned char arr_25 [20] ;
unsigned char arr_28 [20] ;
unsigned short arr_32 [19] [19] [19] ;
unsigned short arr_37 [19] [19] [19] [19] [19] [19] ;
unsigned int arr_24 [13] [13] ;
_Bool arr_29 [20] ;
unsigned short arr_40 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)37146;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 378164614;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)41064;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_25 [i_0] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_28 [i_0] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (unsigned short)48637;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)16985;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_24 [i_0] [i_1] = 1484191296U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_29 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)50578 : (unsigned short)24131;
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
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_40 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
