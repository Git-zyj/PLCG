#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14941;
signed char var_1 = (signed char)59;
signed char var_2 = (signed char)34;
unsigned int var_3 = 2063758727U;
short var_4 = (short)-26491;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)67;
unsigned short var_7 = (unsigned short)22233;
signed char var_8 = (signed char)121;
int var_9 = 1095132787;
unsigned int var_10 = 1423312845U;
unsigned char var_12 = (unsigned char)98;
int zero = 0;
long long int var_13 = 5283895526135405425LL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)32;
unsigned char var_16 = (unsigned char)100;
short var_17 = (short)14929;
long long int var_18 = -1580611333361471596LL;
signed char var_19 = (signed char)-21;
unsigned int var_20 = 2812406421U;
unsigned short var_21 = (unsigned short)45739;
unsigned char arr_4 [10] ;
unsigned short arr_8 [24] ;
long long int arr_16 [24] [24] [24] [24] ;
unsigned short arr_17 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned short)57647;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 67602660125670016LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = (unsigned short)16743;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
