#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)27;
long long int var_4 = 6523847286742367306LL;
signed char var_6 = (signed char)-81;
unsigned char var_8 = (unsigned char)84;
unsigned short var_10 = (unsigned short)46722;
signed char var_11 = (signed char)-4;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 81846282U;
unsigned char var_14 = (unsigned char)66;
unsigned char var_18 = (unsigned char)244;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)42995;
signed char var_21 = (signed char)-52;
long long int var_22 = -5713518169148185852LL;
signed char var_23 = (signed char)4;
long long int var_24 = -4586902075952384202LL;
unsigned long long int var_25 = 195950714076486226ULL;
long long int var_26 = 6496056811771584063LL;
unsigned long long int var_27 = 10879165352531161242ULL;
unsigned long long int var_28 = 1606061742737847124ULL;
unsigned char var_29 = (unsigned char)45;
unsigned char arr_0 [25] ;
unsigned char arr_1 [25] [25] ;
unsigned int arr_2 [25] [25] ;
signed char arr_12 [21] [21] ;
unsigned long long int arr_13 [21] ;
long long int arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 1830096853U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = 10370143851096441462ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = -2084947893234373388LL;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
