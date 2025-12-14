#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)9191;
unsigned short var_3 = (unsigned short)7115;
short var_4 = (short)-10994;
_Bool var_5 = (_Bool)1;
long long int var_7 = -3983284359559609824LL;
_Bool var_8 = (_Bool)1;
short var_10 = (short)-10141;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 546889348280338074LL;
unsigned int var_15 = 1278647369U;
long long int var_16 = -1460460602526335418LL;
signed char var_17 = (signed char)-51;
int zero = 0;
long long int var_19 = -4863163820514617685LL;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-76;
unsigned int var_22 = 3773099819U;
unsigned short var_23 = (unsigned short)15303;
unsigned char var_24 = (unsigned char)40;
long long int var_25 = -8874525943907688774LL;
_Bool var_26 = (_Bool)0;
unsigned int var_27 = 2213659669U;
unsigned int arr_3 [13] [13] ;
unsigned short arr_6 [13] ;
unsigned short arr_10 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 2925333355U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (unsigned short)42880;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)29419;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
