#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2338964577U;
int var_6 = 1973497049;
unsigned int var_7 = 475655138U;
unsigned short var_8 = (unsigned short)2458;
unsigned int var_13 = 1689083236U;
unsigned int var_16 = 1880592608U;
short var_17 = (short)31887;
signed char var_19 = (signed char)-19;
int zero = 0;
unsigned short var_20 = (unsigned short)7615;
unsigned short var_21 = (unsigned short)17205;
unsigned long long int var_22 = 413399385669225268ULL;
unsigned int var_23 = 2365430031U;
unsigned short var_24 = (unsigned short)62371;
short var_25 = (short)-32246;
signed char arr_0 [24] ;
short arr_1 [24] ;
long long int arr_2 [24] [24] ;
short arr_5 [24] ;
unsigned int arr_7 [24] [24] [24] [24] ;
int arr_8 [24] [24] [24] [24] ;
unsigned short arr_3 [24] ;
unsigned int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)32095;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 2746907231109012553LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (short)21479;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 1721247432U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -444086025;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)38421;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 3537641116U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
