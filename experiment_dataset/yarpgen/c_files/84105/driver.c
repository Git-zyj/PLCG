#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3131861768737901064LL;
unsigned short var_6 = (unsigned short)64572;
long long int var_7 = 362417449848234265LL;
unsigned char var_8 = (unsigned char)39;
unsigned char var_9 = (unsigned char)132;
long long int var_10 = 7208597985094183871LL;
unsigned short var_11 = (unsigned short)50060;
short var_12 = (short)19427;
signed char var_13 = (signed char)-22;
int zero = 0;
short var_16 = (short)-10195;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-1929;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 7567514042162717587ULL;
unsigned long long int var_21 = 13692772924621579070ULL;
unsigned short var_22 = (unsigned short)37420;
_Bool var_23 = (_Bool)0;
int var_24 = 454371640;
signed char var_25 = (signed char)-115;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)9618;
unsigned char var_28 = (unsigned char)25;
short var_29 = (short)-32471;
_Bool var_30 = (_Bool)1;
int var_31 = 1649078258;
unsigned short var_32 = (unsigned short)15277;
_Bool var_33 = (_Bool)1;
long long int var_34 = -4752871235997306616LL;
int var_35 = -1946646504;
unsigned short var_36 = (unsigned short)235;
unsigned long long int var_37 = 8909111112130219513ULL;
short var_38 = (short)26286;
signed char arr_3 [12] [12] [12] ;
unsigned long long int arr_4 [12] ;
long long int arr_5 [12] [12] [12] ;
unsigned char arr_7 [12] [12] [12] [12] ;
long long int arr_8 [12] [12] [12] [12] ;
int arr_9 [12] [12] [12] ;
unsigned char arr_10 [12] [12] [12] ;
unsigned short arr_20 [19] ;
long long int arr_21 [19] [19] ;
unsigned char arr_13 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 9164898628754001179ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 7211952953526744705LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -3155079051133549958LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -1850622363;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = (unsigned short)33010;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_21 [i_0] [i_1] = 2458448046859449505LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (unsigned char)61;
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
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
