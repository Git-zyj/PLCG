#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 802209386U;
_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)-59;
unsigned char var_4 = (unsigned char)102;
unsigned long long int var_5 = 8627941709565952538ULL;
unsigned int var_6 = 1552090399U;
unsigned short var_8 = (unsigned short)25268;
signed char var_9 = (signed char)75;
unsigned long long int var_10 = 14788065668129152452ULL;
int zero = 0;
signed char var_12 = (signed char)-105;
int var_13 = -477667988;
unsigned long long int var_14 = 1713099459339822148ULL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 4209193621U;
unsigned long long int var_17 = 11698138552722366802ULL;
signed char var_18 = (signed char)-101;
signed char var_19 = (signed char)-124;
int arr_0 [20] ;
_Bool arr_3 [20] ;
unsigned int arr_6 [20] ;
int arr_7 [20] [20] ;
long long int arr_13 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -484904206;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1232132962U : 1351461115U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? -1487510206 : -1880891372;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3773383672768974686LL : -7535009055944572945LL;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
