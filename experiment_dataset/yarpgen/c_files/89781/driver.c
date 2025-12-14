#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)192;
unsigned char var_1 = (unsigned char)90;
unsigned char var_3 = (unsigned char)41;
unsigned long long int var_4 = 4842270546251587716ULL;
short var_5 = (short)-10500;
long long int var_7 = 6709110380071785568LL;
_Bool var_8 = (_Bool)1;
long long int var_9 = 5964805231957724190LL;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2244472473U;
long long int var_14 = 4529593256038674432LL;
unsigned int var_16 = 2626240431U;
unsigned char var_17 = (unsigned char)93;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2105426388U;
long long int var_21 = 4279601606269575145LL;
unsigned int var_22 = 1819068099U;
long long int var_23 = 63335394532981552LL;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)-62;
unsigned long long int var_26 = 14127355093465088097ULL;
long long int var_27 = -4944604375324874170LL;
short var_28 = (short)-6745;
unsigned char var_29 = (unsigned char)67;
signed char var_30 = (signed char)64;
long long int var_31 = -5734090254035692880LL;
unsigned short var_32 = (unsigned short)63448;
_Bool var_33 = (_Bool)1;
short var_34 = (short)-27589;
unsigned long long int var_35 = 17365894495530613692ULL;
long long int var_36 = 2530925889715166791LL;
_Bool arr_0 [25] [25] ;
unsigned int arr_1 [25] [25] ;
short arr_2 [25] ;
unsigned int arr_4 [25] [25] ;
unsigned int arr_5 [25] ;
long long int arr_6 [25] ;
long long int arr_10 [25] [25] ;
short arr_14 [25] ;
_Bool arr_22 [25] [25] ;
unsigned char arr_24 [25] [25] [25] ;
long long int arr_3 [25] ;
short arr_12 [25] [25] ;
long long int arr_19 [25] ;
unsigned long long int arr_28 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 3805061040U : 3476110484U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-27643 : (short)1349;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 755031340U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 3070443891U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = -1645454838837032480LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 4234836931007482299LL : -7421625209288839583LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)13413 : (short)28212;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_22 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -7185651708412336441LL : 280171598604497091LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-30042 : (short)-21026;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? -1787954678085690990LL : 7523722322653710523LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = 2648807999017079603ULL;
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
