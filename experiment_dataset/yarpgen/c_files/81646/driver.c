#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12243162559495520421ULL;
unsigned short var_2 = (unsigned short)27171;
int var_3 = 387270426;
signed char var_4 = (signed char)1;
unsigned long long int var_7 = 10975804478363349370ULL;
unsigned char var_8 = (unsigned char)62;
short var_9 = (short)-27387;
unsigned long long int var_10 = 4102639828276692744ULL;
signed char var_11 = (signed char)126;
unsigned long long int var_12 = 17260769620355546100ULL;
unsigned int var_13 = 499996905U;
unsigned int var_14 = 1826909173U;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 1401591269001268215ULL;
int zero = 0;
int var_17 = -1539316685;
unsigned char var_18 = (unsigned char)248;
int var_19 = 385790898;
signed char var_20 = (signed char)121;
signed char var_21 = (signed char)-22;
unsigned long long int var_22 = 408416389933277764ULL;
unsigned long long int var_23 = 13007896267605380042ULL;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)54736;
_Bool var_26 = (_Bool)0;
unsigned char var_27 = (unsigned char)223;
unsigned int var_28 = 1508219926U;
signed char var_29 = (signed char)-70;
unsigned char var_30 = (unsigned char)5;
long long int var_31 = -6059671043585946397LL;
unsigned char var_32 = (unsigned char)227;
long long int var_33 = 9127324129553642790LL;
short var_34 = (short)7222;
_Bool var_35 = (_Bool)0;
unsigned short var_36 = (unsigned short)8589;
unsigned short var_37 = (unsigned short)16058;
signed char var_38 = (signed char)101;
unsigned short var_39 = (unsigned short)15058;
signed char var_40 = (signed char)-48;
unsigned long long int var_41 = 13633127296048564397ULL;
long long int var_42 = -9135157289992531101LL;
unsigned char var_43 = (unsigned char)86;
unsigned short var_44 = (unsigned short)5736;
int var_45 = 1611539827;
unsigned long long int var_46 = 12139381617749013947ULL;
unsigned long long int var_47 = 8309045752370731125ULL;
unsigned short var_48 = (unsigned short)25884;
unsigned long long int arr_1 [10] ;
unsigned char arr_4 [10] ;
unsigned int arr_7 [10] [10] [10] [10] [10] [10] ;
unsigned short arr_9 [10] [10] [10] ;
unsigned int arr_11 [24] [24] ;
unsigned int arr_12 [24] ;
unsigned char arr_14 [20] ;
unsigned char arr_16 [20] [20] ;
short arr_18 [20] [20] [20] ;
unsigned long long int arr_19 [20] [20] [20] ;
unsigned long long int arr_25 [25] ;
signed char arr_26 [25] [25] [25] ;
int arr_29 [25] [25] ;
_Bool arr_31 [25] ;
unsigned long long int arr_35 [25] [25] [25] [25] ;
unsigned char arr_36 [25] [25] [25] [25] [25] ;
unsigned long long int arr_37 [25] [25] [25] [25] ;
signed char arr_38 [25] ;
unsigned int arr_40 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 16250837682146770290ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3413623256U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)27001;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = 1883706563U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = 1346589969U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (short)-15462;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 11900533885004421310ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_25 [i_0] = 2043654867156132708ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_29 [i_0] [i_1] = 602045233;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_31 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = 1031452572387252536ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = 9488610536715398669ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_38 [i_0] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_40 [i_0] = 2876577996U;
}

void checksum() {
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
