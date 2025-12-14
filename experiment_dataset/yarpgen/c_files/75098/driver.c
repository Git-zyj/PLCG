#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50646;
long long int var_1 = 5260214677712924833LL;
short var_2 = (short)45;
long long int var_3 = 1984171791294977215LL;
unsigned short var_4 = (unsigned short)2701;
long long int var_5 = -5909073297492386248LL;
unsigned long long int var_6 = 2243338344036103986ULL;
_Bool var_8 = (_Bool)0;
int var_9 = 834434469;
unsigned char var_11 = (unsigned char)156;
unsigned short var_12 = (unsigned short)6913;
short var_14 = (short)6776;
unsigned short var_15 = (unsigned short)16339;
int zero = 0;
unsigned int var_16 = 1101600034U;
unsigned int var_17 = 4180336109U;
unsigned char var_18 = (unsigned char)109;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)55;
long long int var_21 = -3942846815880124695LL;
unsigned short var_22 = (unsigned short)4796;
unsigned long long int var_23 = 12795357479427746359ULL;
unsigned long long int var_24 = 9425230142851137879ULL;
long long int var_25 = -8557404571595209933LL;
int var_26 = 1651193783;
long long int var_27 = 6470035785020987862LL;
unsigned int var_28 = 2014585160U;
long long int var_29 = 7805875066356330160LL;
unsigned char arr_0 [22] [22] ;
unsigned long long int arr_1 [22] [22] ;
unsigned char arr_2 [22] ;
long long int arr_7 [22] [22] [22] ;
long long int arr_16 [19] ;
unsigned char arr_3 [22] [22] ;
unsigned int arr_8 [22] ;
unsigned char arr_9 [22] [22] [22] [22] ;
signed char arr_15 [23] ;
unsigned int arr_18 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)148 : (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 7701684901393279724ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 2094347895303035115LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = -4486970633683274023LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)165 : (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 701169717U : 1576074431U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)123 : (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (signed char)-100 : (signed char)-15;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = 1694261755U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
