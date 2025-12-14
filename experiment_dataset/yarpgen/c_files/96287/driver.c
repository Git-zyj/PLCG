#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15881696064572207757ULL;
unsigned char var_1 = (unsigned char)203;
unsigned int var_2 = 252637847U;
int var_3 = -1601590987;
signed char var_7 = (signed char)37;
unsigned char var_8 = (unsigned char)153;
long long int var_10 = -526106915604692945LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)206;
unsigned int var_13 = 2575659666U;
unsigned long long int var_14 = 13693124189178044292ULL;
unsigned char var_15 = (unsigned char)198;
int arr_1 [23] ;
short arr_2 [23] [23] ;
unsigned char arr_4 [23] ;
unsigned long long int arr_8 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 659412703;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-29828;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 16763684551988018522ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
