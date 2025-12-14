#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4212256852U;
unsigned long long int var_7 = 1249456426898510244ULL;
unsigned int var_8 = 2419938614U;
_Bool var_9 = (_Bool)1;
int var_14 = 1575128830;
unsigned int var_15 = 330889264U;
unsigned long long int var_16 = 9551488288252329875ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1739476833U;
long long int var_19 = -2424445922919108723LL;
signed char var_20 = (signed char)98;
int var_21 = 662147342;
unsigned short var_22 = (unsigned short)55458;
unsigned char var_23 = (unsigned char)157;
unsigned long long int var_24 = 2281083090818515133ULL;
signed char var_25 = (signed char)29;
unsigned long long int var_26 = 6218385580947106112ULL;
_Bool var_27 = (_Bool)1;
_Bool var_28 = (_Bool)1;
_Bool arr_0 [13] ;
signed char arr_1 [13] ;
int arr_2 [13] ;
int arr_4 [13] [13] ;
unsigned long long int arr_6 [13] ;
signed char arr_13 [13] [13] ;
_Bool arr_17 [16] ;
int arr_18 [16] ;
unsigned int arr_19 [16] ;
unsigned int arr_20 [16] [16] [16] ;
unsigned short arr_23 [16] [16] [16] [16] ;
unsigned short arr_24 [16] [16] [16] ;
unsigned char arr_25 [16] [16] [16] [16] ;
signed char arr_10 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)-104;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 1588132083;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 146676115;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 9560933539579484137ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = -532983072;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = 135943446U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 2541509769U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (unsigned short)28920;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (unsigned short)14591;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (signed char)-124;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
