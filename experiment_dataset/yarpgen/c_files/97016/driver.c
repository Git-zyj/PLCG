#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 8165558317319497185LL;
int var_3 = -1667550029;
int var_4 = -259659567;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 8934396829698125176ULL;
unsigned short var_18 = (unsigned short)9136;
int zero = 0;
unsigned int var_19 = 1442022783U;
unsigned int var_20 = 2065822920U;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1464754309U;
short var_23 = (short)22756;
unsigned char var_24 = (unsigned char)213;
unsigned short var_25 = (unsigned short)26635;
unsigned char var_26 = (unsigned char)94;
unsigned int arr_0 [22] ;
int arr_1 [22] [22] ;
int arr_2 [22] [22] ;
int arr_3 [22] ;
unsigned short arr_4 [22] ;
long long int arr_5 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1759249701U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 1965985773;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 1647955919;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -1202168910;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)28965 : (unsigned short)57605;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1230089393410810749LL : 5322068391363032480LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
