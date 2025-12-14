#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15048119355230963611ULL;
unsigned short var_1 = (unsigned short)36335;
unsigned long long int var_2 = 1051530976211114947ULL;
unsigned long long int var_3 = 7300059572734387247ULL;
unsigned long long int var_4 = 331046504249334343ULL;
long long int var_5 = -5790109796837639079LL;
int var_6 = -1693816511;
unsigned short var_8 = (unsigned short)48174;
unsigned int var_9 = 2915440116U;
unsigned long long int var_12 = 8641712408190175379ULL;
unsigned long long int var_13 = 15400519074904053164ULL;
int zero = 0;
long long int var_14 = -3605916614683514610LL;
int var_15 = -1375592002;
short var_16 = (short)-23239;
_Bool var_17 = (_Bool)0;
long long int var_18 = 3491418045963447958LL;
_Bool var_19 = (_Bool)1;
long long int var_20 = 1412098659899975818LL;
long long int arr_10 [13] [13] [13] [13] ;
short arr_11 [25] ;
unsigned short arr_13 [25] ;
unsigned short arr_17 [25] [25] ;
unsigned long long int arr_21 [25] ;
_Bool arr_23 [25] [25] [25] [25] ;
unsigned long long int arr_24 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -7862514481797819224LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (short)5362;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (unsigned short)44401;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)54151 : (unsigned short)14259;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = 10977073203236951909ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 16169878558779863888ULL : 18122012591678531593ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
