#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 3274983525U;
long long int var_4 = 4942914970398393974LL;
unsigned char var_5 = (unsigned char)37;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)31700;
unsigned short var_9 = (unsigned short)49929;
int zero = 0;
short var_10 = (short)3651;
unsigned long long int var_11 = 8154252870562129794ULL;
short var_12 = (short)-11855;
unsigned char var_13 = (unsigned char)98;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)77;
long long int var_16 = 7591561396675075821LL;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)64668;
unsigned long long int var_19 = 4094269657950123777ULL;
unsigned char var_20 = (unsigned char)229;
int var_21 = -62544724;
unsigned short var_22 = (unsigned short)49668;
int var_23 = -569256499;
unsigned int var_24 = 3650988673U;
unsigned int var_25 = 467521963U;
short var_26 = (short)1647;
long long int var_27 = 8323764670927295391LL;
unsigned char var_28 = (unsigned char)50;
unsigned int var_29 = 2025165080U;
unsigned char var_30 = (unsigned char)82;
long long int var_31 = -2581742065017945389LL;
_Bool arr_0 [24] [24] ;
unsigned int arr_1 [24] ;
unsigned short arr_2 [24] ;
short arr_3 [24] ;
long long int arr_4 [17] ;
unsigned int arr_5 [17] ;
unsigned long long int arr_6 [17] [17] ;
short arr_7 [17] ;
long long int arr_8 [17] ;
short arr_10 [10] ;
unsigned int arr_11 [10] ;
unsigned long long int arr_16 [19] [19] ;
unsigned int arr_9 [17] ;
unsigned int arr_13 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 3286856176U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)50547;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)18820;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 930408224987454842LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 3409436193U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = 16284413297586017626ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (short)-31686;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 2300687887652705042LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (short)-5198;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = 3368737339U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = 13525925336733054052ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 3887907789U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = 303682613U;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
