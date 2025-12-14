#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 802681191U;
long long int var_6 = 7245361414637450999LL;
unsigned long long int var_8 = 11825167318704665360ULL;
int var_9 = 320529812;
unsigned char var_10 = (unsigned char)102;
int zero = 0;
unsigned char var_14 = (unsigned char)128;
unsigned long long int var_15 = 1481523005452847186ULL;
unsigned short var_16 = (unsigned short)4631;
signed char var_17 = (signed char)119;
unsigned short var_18 = (unsigned short)1437;
int var_19 = -544075807;
short var_20 = (short)-8504;
signed char var_21 = (signed char)104;
short var_22 = (short)-27528;
unsigned short var_23 = (unsigned short)46655;
signed char var_24 = (signed char)84;
unsigned long long int var_25 = 2246093464461730364ULL;
short var_26 = (short)1961;
signed char var_27 = (signed char)9;
_Bool var_28 = (_Bool)1;
signed char var_29 = (signed char)36;
unsigned int arr_0 [11] [11] ;
unsigned int arr_1 [11] [11] ;
short arr_3 [11] [11] [11] ;
unsigned long long int arr_7 [11] [11] [11] [11] ;
unsigned long long int arr_10 [11] [11] ;
unsigned long long int arr_11 [11] [11] ;
_Bool arr_15 [11] [11] [11] [11] ;
short arr_18 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 3155405450U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 3856050862U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-12387;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 8080244678726130530ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 8444677548797204157ULL : 17863370519234305539ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = 4027266297662353071ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (short)-25252;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
