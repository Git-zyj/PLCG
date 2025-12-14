#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28050;
_Bool var_2 = (_Bool)1;
short var_3 = (short)26309;
unsigned short var_4 = (unsigned short)12068;
int var_5 = 338787940;
unsigned short var_8 = (unsigned short)52289;
unsigned long long int var_9 = 2557119280821858556ULL;
short var_10 = (short)-15022;
int var_11 = -1617722194;
int zero = 0;
long long int var_12 = 5923819991260344346LL;
signed char var_13 = (signed char)-127;
unsigned char var_14 = (unsigned char)127;
unsigned long long int var_15 = 15000350444848462155ULL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 8708225811114945220ULL;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)16;
int var_21 = 1919421297;
unsigned short var_22 = (unsigned short)48433;
unsigned char var_23 = (unsigned char)181;
short var_24 = (short)-6925;
int var_25 = 865942424;
int var_26 = 1544504745;
int var_27 = 1363765195;
unsigned short var_28 = (unsigned short)26972;
_Bool var_29 = (_Bool)0;
unsigned long long int arr_0 [11] ;
int arr_1 [11] [11] ;
unsigned short arr_2 [11] ;
unsigned short arr_3 [16] ;
unsigned long long int arr_4 [16] [16] ;
int arr_5 [16] ;
unsigned long long int arr_6 [16] [16] [16] ;
long long int arr_7 [16] [16] [16] ;
_Bool arr_11 [24] [24] ;
unsigned char arr_12 [24] ;
long long int arr_13 [24] ;
int arr_8 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 1551985492778391576ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = -655551819;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)20239 : (unsigned short)11022;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)31753;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 10396254237302238617ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -239429786;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 16607348724581377461ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 1478045904329554610LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = -9016164122971666901LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = -385385752;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
