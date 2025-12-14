#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)66;
unsigned char var_2 = (unsigned char)236;
unsigned long long int var_3 = 2617012801936943479ULL;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)43505;
unsigned int var_9 = 722386772U;
int zero = 0;
unsigned long long int var_10 = 2855109190438552959ULL;
unsigned int var_11 = 1502849397U;
signed char var_12 = (signed char)53;
unsigned char var_13 = (unsigned char)143;
unsigned int var_14 = 491209591U;
int var_15 = 137061677;
int arr_0 [21] ;
unsigned char arr_1 [21] ;
long long int arr_5 [14] [14] ;
int arr_2 [21] ;
long long int arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -1213074056 : 1651619413;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)254 : (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -4395667531754195314LL : 482570263267336510LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -13556854 : 1262470544;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 581702921657649623LL : 6766255052463296981LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
