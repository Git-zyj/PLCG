#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1840972278;
unsigned short var_1 = (unsigned short)47412;
signed char var_2 = (signed char)127;
unsigned long long int var_3 = 2339480741424111924ULL;
long long int var_4 = -3287143154246824912LL;
unsigned int var_6 = 1534474060U;
unsigned short var_7 = (unsigned short)34232;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)91;
unsigned short var_11 = (unsigned short)47973;
unsigned char var_12 = (unsigned char)127;
unsigned long long int var_13 = 16728819325881218516ULL;
signed char var_14 = (signed char)-118;
long long int var_15 = -5561997830704998892LL;
signed char var_16 = (signed char)-74;
short var_18 = (short)24836;
int var_19 = 1571510291;
int zero = 0;
unsigned int var_20 = 1520884193U;
short var_21 = (short)4682;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-6547;
unsigned long long int var_24 = 13479511525116476135ULL;
unsigned long long int var_25 = 1163253863074932903ULL;
unsigned char var_26 = (unsigned char)153;
unsigned long long int var_27 = 18264106794955009873ULL;
_Bool var_28 = (_Bool)0;
unsigned char var_29 = (unsigned char)36;
unsigned long long int var_30 = 276243702025417137ULL;
_Bool var_31 = (_Bool)0;
int var_32 = -806846820;
int var_33 = 2091570214;
long long int var_34 = 2685733716886102929LL;
unsigned long long int var_35 = 17018495490108286954ULL;
unsigned int var_36 = 3421325976U;
signed char var_37 = (signed char)-73;
unsigned long long int arr_0 [16] ;
long long int arr_1 [16] ;
int arr_2 [16] [16] ;
int arr_4 [16] ;
_Bool arr_5 [16] [16] [16] ;
unsigned long long int arr_6 [16] [16] ;
unsigned long long int arr_8 [16] [16] ;
unsigned long long int arr_11 [16] [16] ;
unsigned short arr_12 [16] [16] ;
short arr_18 [16] [16] [16] [16] ;
unsigned int arr_20 [16] [16] ;
short arr_28 [23] ;
unsigned char arr_30 [23] ;
short arr_13 [16] [16] ;
_Bool arr_14 [16] ;
signed char arr_17 [16] ;
unsigned int arr_26 [16] [16] [16] [16] [16] [16] ;
unsigned short arr_27 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 5322342069199347589ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1494649849802949570LL : 1254691671160923053LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -194125530 : -1324489102;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 568566298 : 1930441307;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 6356879898114384540ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 10135667416954923952ULL : 10659845379730851951ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 4447217852640271494ULL : 8037277095990747589ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)36123 : (unsigned short)50723;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (short)19447;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_20 [i_0] [i_1] = 2090349917U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_28 [i_0] = (short)-23101;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_30 [i_0] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-32119 : (short)10087;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (signed char)-118 : (signed char)-109;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 742422438U : 3915667458U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (unsigned short)15193 : (unsigned short)45507;
}

void checksum() {
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
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
