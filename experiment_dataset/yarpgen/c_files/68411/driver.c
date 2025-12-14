#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5816411920272010307LL;
unsigned char var_1 = (unsigned char)178;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)54;
unsigned int var_6 = 2269789594U;
unsigned char var_7 = (unsigned char)24;
unsigned char var_8 = (unsigned char)221;
signed char var_9 = (signed char)68;
int zero = 0;
unsigned short var_10 = (unsigned short)25946;
unsigned long long int var_11 = 13967225371405464551ULL;
signed char var_12 = (signed char)37;
unsigned long long int var_13 = 11465122621400532477ULL;
unsigned long long int var_14 = 376754873403497144ULL;
unsigned char var_15 = (unsigned char)76;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-19;
short var_20 = (short)-12152;
short var_21 = (short)5249;
short var_22 = (short)24536;
unsigned int var_23 = 2239310383U;
signed char var_24 = (signed char)-85;
unsigned long long int var_25 = 749926792216068099ULL;
unsigned short var_26 = (unsigned short)42759;
unsigned char var_27 = (unsigned char)174;
short var_28 = (short)-3937;
unsigned char var_29 = (unsigned char)250;
unsigned int var_30 = 1754399886U;
unsigned char var_31 = (unsigned char)247;
unsigned char var_32 = (unsigned char)209;
unsigned long long int var_33 = 6086534123727206577ULL;
signed char arr_0 [12] ;
unsigned long long int arr_4 [17] ;
unsigned char arr_5 [17] [17] ;
signed char arr_7 [17] [17] ;
signed char arr_8 [17] ;
unsigned int arr_9 [17] ;
unsigned int arr_11 [24] ;
signed char arr_12 [24] ;
_Bool arr_13 [24] ;
short arr_15 [24] [24] [24] ;
unsigned char arr_16 [24] ;
signed char arr_19 [24] [24] ;
short arr_21 [24] [24] [24] ;
unsigned long long int arr_22 [24] ;
int arr_23 [24] [24] [24] ;
signed char arr_24 [24] [24] [24] ;
short arr_25 [24] ;
unsigned int arr_26 [24] [24] ;
signed char arr_33 [24] ;
unsigned char arr_34 [24] [24] ;
unsigned long long int arr_3 [12] ;
long long int arr_6 [17] [17] ;
unsigned int arr_10 [17] [17] ;
unsigned short arr_17 [24] ;
unsigned long long int arr_18 [24] [24] ;
unsigned short arr_31 [24] ;
signed char arr_36 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 7329531747171833706ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-71;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 3064704753U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = 4291587545U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (short)-21120;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)113 : (signed char)51;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (short)6558;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_22 [i_0] = 17667443644261676315ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = -254945675;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_25 [i_0] = (short)21682;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_26 [i_0] [i_1] = 278496601U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_33 [i_0] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_34 [i_0] [i_1] = (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 12406804060192701950ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = -251742004930844436LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = 1746217449U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = (unsigned short)58466;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = 4910373532228289453ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_31 [i_0] = (unsigned short)52280;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_36 [i_0] = (signed char)-66;
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_36 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
