#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18387666334155627325ULL;
int var_1 = -1587634185;
unsigned long long int var_2 = 10032330930719035722ULL;
unsigned long long int var_3 = 3774191392038588605ULL;
unsigned char var_4 = (unsigned char)69;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)35314;
unsigned long long int var_8 = 2793292451311775792ULL;
unsigned long long int var_9 = 12537973825778354234ULL;
int zero = 0;
signed char var_10 = (signed char)-41;
unsigned int var_11 = 1385744903U;
unsigned char var_12 = (unsigned char)107;
signed char var_13 = (signed char)-73;
short var_14 = (short)-12788;
unsigned char var_15 = (unsigned char)155;
short var_16 = (short)899;
short var_17 = (short)14346;
long long int var_18 = 9081553084203553386LL;
long long int var_19 = -5262580591011299774LL;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)156;
short var_22 = (short)8485;
long long int var_23 = -351422210375992973LL;
short var_24 = (short)-26396;
short var_25 = (short)-16036;
unsigned char var_26 = (unsigned char)224;
unsigned int arr_1 [22] [22] ;
unsigned short arr_2 [22] [22] [22] ;
int arr_3 [22] ;
unsigned short arr_4 [22] [22] [22] ;
long long int arr_5 [22] [22] [22] [22] ;
unsigned long long int arr_6 [22] [22] [22] [22] [22] ;
long long int arr_7 [22] [22] [22] [22] ;
unsigned long long int arr_8 [22] ;
unsigned char arr_11 [12] ;
unsigned char arr_15 [12] [12] ;
int arr_16 [12] ;
signed char arr_17 [12] ;
signed char arr_10 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 2666842427U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)22189;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 2056261883;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)20583;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = -4763887122148123419LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] = 13933820942155361812ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 8569157457233328813LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 14948807907914177642ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)228 : (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = 1072059480;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)111;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
