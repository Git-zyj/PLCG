#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)18;
signed char var_2 = (signed char)29;
signed char var_4 = (signed char)29;
unsigned char var_5 = (unsigned char)232;
unsigned int var_6 = 2152466900U;
unsigned long long int var_7 = 16160742593418993647ULL;
unsigned char var_8 = (unsigned char)43;
unsigned int var_11 = 4050834525U;
long long int var_12 = -1159910577383368477LL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 15756826054738410312ULL;
short var_18 = (short)21453;
int zero = 0;
unsigned char var_19 = (unsigned char)138;
long long int var_20 = -5390371280607770893LL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 4300249438088418914ULL;
unsigned char var_23 = (unsigned char)200;
unsigned char var_24 = (unsigned char)159;
unsigned char var_25 = (unsigned char)207;
unsigned int var_26 = 2910699098U;
int var_27 = 480288752;
long long int var_28 = -4398421573205690972LL;
long long int var_29 = 3369626289183301828LL;
_Bool var_30 = (_Bool)0;
_Bool arr_0 [13] ;
_Bool arr_3 [22] ;
unsigned char arr_4 [22] [22] ;
int arr_5 [22] ;
short arr_6 [22] ;
short arr_7 [22] ;
unsigned char arr_8 [22] [22] ;
unsigned int arr_2 [13] [13] ;
unsigned char arr_9 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)15 : (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1337753457 : 2019098406;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)17440 : (short)24319;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)11180 : (short)32342;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)189 : (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 1790762990U : 992081206U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)136 : (unsigned char)85;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
