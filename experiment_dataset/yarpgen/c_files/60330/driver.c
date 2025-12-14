#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)184;
unsigned short var_2 = (unsigned short)15998;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)1;
short var_8 = (short)24614;
unsigned short var_9 = (unsigned short)15834;
unsigned short var_10 = (unsigned short)62592;
int var_11 = -532522732;
unsigned char var_12 = (unsigned char)14;
short var_13 = (short)16889;
unsigned short var_14 = (unsigned short)29658;
short var_16 = (short)8290;
int zero = 0;
signed char var_19 = (signed char)20;
long long int var_20 = 8047297663830809080LL;
unsigned int var_21 = 3805252709U;
unsigned long long int var_22 = 10284948359276339701ULL;
_Bool var_23 = (_Bool)0;
long long int var_24 = -3916682968575915164LL;
unsigned short var_25 = (unsigned short)63682;
unsigned short var_26 = (unsigned short)6612;
long long int var_27 = 8415663032936252082LL;
unsigned char var_28 = (unsigned char)208;
unsigned long long int var_29 = 1541637942591401068ULL;
unsigned short var_30 = (unsigned short)40465;
unsigned char var_31 = (unsigned char)88;
signed char var_32 = (signed char)21;
unsigned short var_33 = (unsigned short)23856;
signed char arr_0 [14] [14] ;
long long int arr_1 [14] ;
unsigned char arr_2 [14] ;
long long int arr_3 [20] ;
short arr_4 [20] [20] ;
unsigned long long int arr_5 [20] ;
_Bool arr_6 [20] ;
unsigned int arr_8 [16] ;
long long int arr_9 [16] ;
signed char arr_10 [16] [16] ;
unsigned int arr_11 [16] [16] ;
long long int arr_12 [16] ;
unsigned long long int arr_16 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 2978413412059119632LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -4769668661667568374LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (short)27273;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 14447156237553974853ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1540200199U : 1429831004U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 8978699387803791883LL : 1067276239081759203LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-119 : (signed char)-87;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = 1182431602U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = 7110306730076837903LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 6442147129482525729ULL : 15298757311877803357ULL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
