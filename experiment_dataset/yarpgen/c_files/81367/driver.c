#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)84;
unsigned long long int var_3 = 8387721449111810003ULL;
int var_6 = -711675228;
signed char var_11 = (signed char)83;
int zero = 0;
short var_13 = (short)-29919;
unsigned short var_14 = (unsigned short)31801;
unsigned short var_15 = (unsigned short)7970;
unsigned short var_16 = (unsigned short)62728;
unsigned int var_17 = 1817412233U;
short var_18 = (short)17045;
long long int var_19 = 527898841301948091LL;
signed char var_20 = (signed char)58;
unsigned int var_21 = 770355520U;
signed char arr_1 [24] ;
unsigned short arr_2 [24] [24] ;
unsigned char arr_3 [24] [24] ;
unsigned short arr_5 [24] ;
short arr_6 [24] [24] [24] ;
unsigned char arr_15 [24] ;
short arr_16 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-115 : (signed char)12;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)32054;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)248 : (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)31985 : (unsigned short)53832;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-3301 : (short)21077;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned char)142 : (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (short)20795 : (short)12219;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
