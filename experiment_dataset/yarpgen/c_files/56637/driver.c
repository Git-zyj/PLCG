#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)200;
short var_1 = (short)13936;
unsigned int var_2 = 499791609U;
unsigned int var_12 = 1033632546U;
int var_14 = 540064957;
unsigned char var_16 = (unsigned char)83;
unsigned short var_18 = (unsigned short)28821;
int zero = 0;
long long int var_20 = 3483988982439143780LL;
unsigned char var_21 = (unsigned char)58;
long long int var_22 = -6178758260778435700LL;
long long int var_23 = 5263034033449586671LL;
unsigned char var_24 = (unsigned char)162;
unsigned short var_25 = (unsigned short)46323;
long long int var_26 = -5833224178305936149LL;
_Bool var_27 = (_Bool)0;
_Bool var_28 = (_Bool)1;
_Bool var_29 = (_Bool)0;
unsigned int arr_0 [17] ;
unsigned short arr_2 [17] ;
short arr_3 [18] ;
long long int arr_5 [18] ;
short arr_6 [18] ;
short arr_9 [10] ;
unsigned short arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 2102941098U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)28786;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)-19748;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 4141260210586233548LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (short)-10263;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (short)28405;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned short)31635;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
