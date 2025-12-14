#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -9103481842514106621LL;
unsigned char var_4 = (unsigned char)10;
long long int var_9 = 4451206663734919196LL;
int var_11 = 726289535;
unsigned long long int var_12 = 2577244801143701084ULL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_16 = 458596829457005845ULL;
int var_17 = 158856841;
unsigned char var_18 = (unsigned char)189;
int zero = 0;
short var_19 = (short)28532;
int var_20 = -887167513;
short var_21 = (short)25221;
unsigned int var_22 = 3264610017U;
short var_23 = (short)-31448;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)160;
short var_26 = (short)32282;
short var_27 = (short)1136;
_Bool var_28 = (_Bool)1;
_Bool var_29 = (_Bool)0;
long long int var_30 = 8750157316077427105LL;
long long int var_31 = 5692961332289226115LL;
unsigned char var_32 = (unsigned char)92;
signed char var_33 = (signed char)119;
int var_34 = 490834050;
signed char var_35 = (signed char)55;
signed char var_36 = (signed char)-60;
_Bool arr_1 [14] ;
unsigned short arr_3 [22] ;
signed char arr_6 [25] [25] ;
_Bool arr_9 [25] [25] ;
unsigned long long int arr_10 [25] ;
unsigned int arr_13 [25] ;
unsigned long long int arr_14 [25] [25] ;
unsigned short arr_15 [25] [25] [25] ;
short arr_19 [25] [25] ;
_Bool arr_21 [25] [25] ;
unsigned char arr_11 [25] ;
unsigned long long int arr_17 [25] [25] [25] ;
unsigned short arr_22 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)12193;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)46 : (signed char)97;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = 12438876531108931665ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = 1358403651U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? 16125564739912435742ULL : 6688953708268177777ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned short)57590;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_19 [i_0] [i_1] = (short)27992;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_21 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)217 : (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 14429152623106280647ULL : 4545286882667282691ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)62724 : (unsigned short)43938;
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
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
