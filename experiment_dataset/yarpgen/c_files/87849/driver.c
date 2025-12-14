#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2583815572U;
unsigned int var_2 = 1057919136U;
unsigned int var_3 = 26937402U;
unsigned int var_4 = 293813934U;
unsigned int var_5 = 3138207598U;
unsigned int var_6 = 1427581849U;
unsigned int var_8 = 1669391076U;
int zero = 0;
unsigned int var_10 = 1974950738U;
unsigned int var_11 = 2658270226U;
unsigned int var_12 = 1507272079U;
unsigned int var_13 = 84976077U;
unsigned int var_14 = 4279423284U;
unsigned int var_15 = 167046468U;
unsigned int var_16 = 2750814305U;
unsigned int var_17 = 2156207739U;
unsigned int var_18 = 2787525529U;
unsigned int var_19 = 4199276087U;
unsigned int var_20 = 3465403434U;
unsigned int var_21 = 3221322397U;
unsigned int arr_0 [11] ;
unsigned int arr_1 [11] ;
unsigned int arr_3 [11] [11] ;
unsigned int arr_4 [11] ;
unsigned int arr_5 [11] [11] ;
unsigned int arr_7 [11] [11] ;
unsigned int arr_2 [11] ;
unsigned int arr_9 [11] [11] [11] ;
unsigned int arr_13 [11] ;
unsigned int arr_14 [11] ;
unsigned int arr_18 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 2936337021U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 148395001U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 1459425772U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 1864051339U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = 1572559278U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 371454195U : 3897382517U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 4010303338U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 435154391U : 897977180U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 2035830040U : 3855800155U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 874386842U : 390709080U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 1083896662U : 1839586183U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
