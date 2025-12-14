#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31042;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
int var_4 = 1720857179;
int var_5 = 120322934;
unsigned long long int var_6 = 12464161005227546317ULL;
unsigned long long int var_7 = 17488607077229095643ULL;
unsigned char var_8 = (unsigned char)232;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)41;
unsigned int var_11 = 1677603292U;
_Bool var_12 = (_Bool)0;
int var_13 = -1780501493;
unsigned char var_14 = (unsigned char)182;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)49413;
unsigned char var_17 = (unsigned char)198;
signed char var_18 = (signed char)88;
int var_19 = 1314724085;
_Bool var_20 = (_Bool)1;
short var_21 = (short)16220;
unsigned long long int var_22 = 8552859460034488803ULL;
unsigned short var_23 = (unsigned short)15398;
unsigned long long int var_24 = 12886739952577087705ULL;
signed char var_25 = (signed char)-37;
unsigned int var_26 = 884698016U;
_Bool var_27 = (_Bool)0;
signed char var_28 = (signed char)24;
unsigned short var_29 = (unsigned short)43910;
unsigned char var_30 = (unsigned char)72;
unsigned int var_31 = 2411408265U;
unsigned int var_32 = 3132439290U;
unsigned long long int var_33 = 16054454285569829639ULL;
unsigned short var_34 = (unsigned short)24547;
int var_35 = -614877929;
int var_36 = -1626823553;
unsigned long long int var_37 = 7330787512233771985ULL;
unsigned long long int var_38 = 4330638639398198543ULL;
signed char var_39 = (signed char)102;
unsigned int arr_0 [15] ;
unsigned long long int arr_1 [15] ;
unsigned short arr_2 [15] ;
signed char arr_5 [15] [15] ;
short arr_7 [20] ;
unsigned int arr_8 [20] ;
signed char arr_9 [20] [20] [20] ;
int arr_12 [20] [20] ;
int arr_15 [20] ;
int arr_18 [20] [20] [20] [20] ;
int arr_22 [20] [20] [20] ;
signed char arr_23 [20] [20] [20] ;
signed char arr_24 [20] [20] [20] [20] ;
int arr_29 [20] [20] [20] [20] ;
short arr_30 [20] [20] [20] [20] ;
short arr_44 [20] ;
unsigned short arr_6 [15] [15] ;
unsigned char arr_11 [20] [20] ;
long long int arr_37 [20] [20] [20] [20] ;
unsigned long long int arr_52 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 875494285U : 304162160U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 4585952948062102440ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)40939;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-44 : (signed char)-100;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (short)3011;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 3405056427U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = 1815461661;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = 2052302229;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 1533801584;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = -561420958;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = 1602802204;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)-21033 : (short)-29833;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_44 [i_0] = (short)26173;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)1243 : (unsigned short)63322;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = -5060483535646541620LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_52 [i_0] = 6716409563111482275ULL;
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_37 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_52 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
