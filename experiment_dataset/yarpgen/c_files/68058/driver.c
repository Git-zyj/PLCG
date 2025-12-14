#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9742;
short var_1 = (short)7379;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)93;
unsigned long long int var_4 = 16476677530196583138ULL;
int var_5 = 672710417;
long long int var_7 = 7951284985196223140LL;
short var_8 = (short)31901;
long long int var_9 = 2059616207420274026LL;
int zero = 0;
long long int var_10 = 9153996295345964577LL;
unsigned int var_11 = 966856837U;
long long int var_12 = 688422517198127352LL;
_Bool arr_2 [24] [24] ;
short arr_3 [24] [24] ;
long long int arr_7 [10] ;
long long int arr_8 [10] [10] ;
unsigned char arr_9 [10] ;
short arr_10 [10] ;
unsigned short arr_13 [13] ;
unsigned short arr_14 [13] ;
short arr_15 [13] ;
short arr_16 [13] ;
long long int arr_21 [24] [24] ;
long long int arr_22 [24] [24] ;
long long int arr_23 [24] ;
unsigned int arr_24 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)30115 : (short)3303;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = -6905429496470757477LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = -272900218148496138LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (short)5579;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (unsigned short)48488;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (unsigned short)50492;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = (short)25097;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (short)-2810;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? 2485070009630640158LL : -2020554059591154885LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? -5312215954845229767LL : 2489834431532310361LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? -6041341976716992442LL : -3395303108285086899LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? 2302650993U : 3093942998U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
