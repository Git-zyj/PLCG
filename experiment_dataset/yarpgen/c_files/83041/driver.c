#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4783101689638512305LL;
signed char var_1 = (signed char)39;
long long int var_7 = -3615211186057646127LL;
signed char var_8 = (signed char)-68;
unsigned char var_9 = (unsigned char)194;
unsigned char var_14 = (unsigned char)59;
unsigned long long int var_16 = 10265454221569182169ULL;
int zero = 0;
unsigned long long int var_17 = 8275939190932746671ULL;
long long int var_18 = 4537593431600655955LL;
unsigned int var_19 = 3606568296U;
signed char var_20 = (signed char)-17;
int arr_1 [11] [11] ;
unsigned long long int arr_5 [11] [11] [11] ;
unsigned long long int arr_6 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = -1401200455;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 4202628794886344800ULL : 16095141486371950542ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 14510201293719639997ULL : 15965329280492430732ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
