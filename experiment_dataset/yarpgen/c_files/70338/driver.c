#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 9280749U;
unsigned short var_3 = (unsigned short)8795;
unsigned short var_4 = (unsigned short)62600;
signed char var_5 = (signed char)-15;
long long int var_6 = -1853105913188600558LL;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 3757020093U;
int var_11 = -1787542491;
_Bool var_12 = (_Bool)1;
unsigned int var_14 = 3780406559U;
short var_15 = (short)28095;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = 139371154;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2232669349U;
long long int var_20 = 6858071716145699490LL;
_Bool var_21 = (_Bool)1;
int var_22 = 1039707514;
int var_23 = -542765351;
long long int var_24 = 4600757159654006152LL;
_Bool var_25 = (_Bool)0;
short var_26 = (short)20519;
int var_27 = 253782348;
_Bool arr_0 [24] ;
unsigned char arr_1 [24] ;
_Bool arr_3 [10] ;
unsigned short arr_4 [10] [10] ;
short arr_5 [10] [10] ;
unsigned int arr_2 [24] ;
short arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)3554;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (short)3180;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 4086233934U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-12566;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
