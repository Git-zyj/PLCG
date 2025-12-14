#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-60;
unsigned long long int var_2 = 11254890413199167961ULL;
int var_3 = -394170027;
signed char var_4 = (signed char)-60;
long long int var_5 = -2492108449902255728LL;
unsigned long long int var_8 = 3877267556473468336ULL;
signed char var_9 = (signed char)-14;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-94;
int var_12 = 1216903444;
unsigned long long int var_13 = 10731815352701330172ULL;
unsigned int var_14 = 2360379121U;
short var_15 = (short)-1072;
signed char arr_4 [25] [25] ;
_Bool arr_7 [25] ;
unsigned char arr_2 [10] ;
unsigned char arr_3 [10] [10] ;
_Bool arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-21 : (signed char)-102;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)66;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
