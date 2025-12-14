#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13940148296186075177ULL;
short var_5 = (short)3987;
_Bool var_7 = (_Bool)0;
unsigned int var_10 = 2236200852U;
long long int var_11 = 9191342967997849548LL;
long long int var_12 = -8371149159579578967LL;
int zero = 0;
unsigned short var_16 = (unsigned short)50680;
long long int var_17 = -579870056859600640LL;
_Bool var_18 = (_Bool)1;
long long int var_19 = 4525496379996419786LL;
unsigned long long int var_20 = 391118930180232216ULL;
unsigned long long int var_21 = 11121451056293478751ULL;
unsigned short var_22 = (unsigned short)4328;
unsigned int var_23 = 1990495445U;
_Bool arr_1 [24] [24] ;
signed char arr_4 [24] ;
unsigned short arr_10 [24] [24] [24] ;
unsigned int arr_11 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)53675 : (unsigned short)40915;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 2943093753U : 4144624115U;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
