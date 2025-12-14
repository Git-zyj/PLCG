#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5268;
unsigned int var_1 = 1546696860U;
unsigned long long int var_3 = 17409576038468331505ULL;
int var_4 = -1659988769;
int var_5 = 165314041;
int var_6 = 1148850386;
int var_8 = -840099971;
unsigned long long int var_9 = 2638153218019669218ULL;
unsigned long long int var_12 = 8177758240348191434ULL;
int zero = 0;
unsigned long long int var_15 = 89036038036651462ULL;
long long int var_16 = 8536051308099401387LL;
unsigned long long int var_17 = 15969288135457336208ULL;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 14277254577305601591ULL;
unsigned long long int var_20 = 18285585557071996624ULL;
unsigned int var_21 = 1740113073U;
unsigned long long int var_22 = 1834538872132430012ULL;
unsigned char var_23 = (unsigned char)136;
unsigned long long int var_24 = 531514245515894447ULL;
unsigned long long int var_25 = 5647345285337915031ULL;
unsigned long long int var_26 = 15512118498382066517ULL;
signed char var_27 = (signed char)-98;
unsigned long long int var_28 = 15291586882907259394ULL;
unsigned int arr_0 [22] [22] ;
unsigned char arr_1 [22] ;
unsigned char arr_2 [22] ;
unsigned long long int arr_3 [22] ;
unsigned long long int arr_8 [12] [12] [12] [12] ;
unsigned long long int arr_10 [12] [12] [12] [12] [12] [12] ;
unsigned long long int arr_14 [12] ;
signed char arr_12 [12] [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 2444873104U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 17455985576991896024ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 6482535893987989407ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 57519300314817448ULL : 5244127736641607879ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = 5183556577941234424ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (signed char)112 : (signed char)-86;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
