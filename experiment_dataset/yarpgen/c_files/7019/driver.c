#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)35;
signed char var_1 = (signed char)-36;
signed char var_2 = (signed char)-98;
signed char var_3 = (signed char)-76;
unsigned int var_5 = 3920774764U;
unsigned int var_6 = 1255640688U;
unsigned short var_7 = (unsigned short)63801;
unsigned int var_8 = 1921174060U;
short var_9 = (short)-1586;
unsigned short var_11 = (unsigned short)52154;
unsigned char var_12 = (unsigned char)38;
short var_13 = (short)-30688;
unsigned int var_14 = 2872025040U;
unsigned long long int var_15 = 4770687911666562474ULL;
int zero = 0;
short var_17 = (short)10308;
unsigned char var_18 = (unsigned char)41;
signed char var_19 = (signed char)32;
unsigned short var_20 = (unsigned short)59064;
long long int var_21 = 6930584755061541923LL;
unsigned long long int var_22 = 2898932070474118376ULL;
unsigned int var_23 = 2651685484U;
long long int var_24 = -5694511000379032480LL;
unsigned int var_25 = 3676499666U;
short var_26 = (short)-12403;
unsigned short var_27 = (unsigned short)4794;
signed char var_28 = (signed char)-76;
unsigned short var_29 = (unsigned short)60694;
short var_30 = (short)-13019;
unsigned int var_31 = 3928795117U;
unsigned short var_32 = (unsigned short)28850;
signed char var_33 = (signed char)110;
unsigned short var_34 = (unsigned short)16483;
short var_35 = (short)29625;
long long int var_36 = -2148196628655354732LL;
unsigned char var_37 = (unsigned char)186;
unsigned int var_38 = 4061255420U;
unsigned long long int arr_0 [12] [12] ;
unsigned int arr_1 [12] ;
short arr_2 [12] ;
short arr_3 [12] [12] [12] ;
unsigned int arr_6 [12] ;
unsigned short arr_7 [12] [12] ;
long long int arr_12 [12] ;
unsigned short arr_13 [12] [12] [12] ;
long long int arr_14 [12] [12] [12] ;
short arr_18 [23] ;
short arr_19 [23] ;
signed char arr_22 [13] ;
unsigned short arr_27 [13] [13] [13] ;
unsigned int arr_28 [13] [13] ;
signed char arr_38 [17] ;
long long int arr_39 [17] ;
unsigned short arr_40 [17] [17] ;
unsigned int arr_47 [17] ;
unsigned int arr_48 [17] ;
unsigned short arr_4 [12] [12] [12] ;
signed char arr_9 [12] ;
short arr_10 [12] [12] ;
long long int arr_11 [12] ;
unsigned long long int arr_16 [12] [12] ;
short arr_17 [12] ;
unsigned int arr_20 [23] ;
unsigned short arr_23 [13] [13] ;
unsigned short arr_26 [13] [13] ;
unsigned int arr_31 [13] [13] [13] ;
signed char arr_34 [13] [13] ;
unsigned int arr_44 [17] [17] ;
unsigned int arr_49 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 18405187225965891718ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 460976443U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)-8984;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-18103;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 2676714075U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)64958;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = -8798424763599879900LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned short)24802;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -7992834650826713652LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = (short)19525;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = (short)-22101;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_22 [i_0] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)6979 : (unsigned short)17328;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_28 [i_0] [i_1] = (i_1 % 2 == 0) ? 403434362U : 2781274121U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_38 [i_0] = (signed char)-16;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_39 [i_0] = -3626644568053845769LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_40 [i_0] [i_1] = (unsigned short)56667;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_47 [i_0] = 4013253870U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_48 [i_0] = 4124937986U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)59362;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (short)4572;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = -555397037143848553LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = 3837844025925929074ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (short)15447;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = 3186011032U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned short)61223;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_26 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)35236 : (unsigned short)39802;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 673239831U : 805274134U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_34 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)112 : (signed char)49;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_44 [i_0] [i_1] = 299485053U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_49 [i_0] = 191313249U;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_31 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_44 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_49 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
