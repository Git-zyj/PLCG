#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)179;
short var_1 = (short)-17136;
signed char var_2 = (signed char)96;
unsigned char var_3 = (unsigned char)140;
signed char var_4 = (signed char)-105;
int var_5 = -1896940463;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
long long int var_8 = 6420475109775782281LL;
signed char var_9 = (signed char)72;
unsigned long long int var_10 = 11189828092606846434ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 2479514711414580406ULL;
unsigned long long int var_13 = 17382422466260341444ULL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)54;
signed char var_16 = (signed char)18;
unsigned long long int var_17 = 5608115491626301782ULL;
unsigned char var_18 = (unsigned char)49;
unsigned char arr_2 [10] ;
signed char arr_3 [10] [10] [10] ;
unsigned long long int arr_6 [10] [10] [10] [10] ;
short arr_9 [10] [10] [10] ;
unsigned char arr_24 [25] ;
_Bool arr_25 [25] ;
_Bool arr_8 [10] [10] [10] ;
unsigned short arr_16 [10] ;
unsigned long long int arr_17 [10] [10] [10] [10] [10] ;
signed char arr_21 [10] [10] ;
short arr_22 [10] ;
unsigned long long int arr_23 [10] [10] ;
unsigned char arr_26 [25] ;
long long int arr_27 [25] ;
int arr_30 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)113;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 12494022118192223857ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)11859;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_24 [i_0] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_25 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = (unsigned short)32253;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = 15681686387666134920ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_21 [i_0] [i_1] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_22 [i_0] = (short)-31295;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_23 [i_0] [i_1] = 5049158271646630447ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_26 [i_0] = (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_27 [i_0] = 468400961813918478LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = -1863533401;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
