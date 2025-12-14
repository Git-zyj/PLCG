#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)184;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)164;
signed char var_17 = (signed char)-58;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
int var_20 = -689833297;
unsigned int var_21 = 2023135672U;
int var_22 = -1086300825;
short var_23 = (short)-2752;
unsigned char var_24 = (unsigned char)225;
unsigned char arr_2 [10] ;
unsigned char arr_3 [10] ;
unsigned char arr_4 [24] ;
unsigned int arr_7 [24] ;
int arr_9 [24] ;
long long int arr_11 [24] ;
long long int arr_12 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 206352505U : 2787781249U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = -416521168;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -3318131102127519199LL : -5459406455933925735LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = -7630369808806343106LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
