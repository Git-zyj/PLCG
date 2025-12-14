#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15370;
unsigned short var_4 = (unsigned short)6402;
unsigned char var_6 = (unsigned char)8;
short var_8 = (short)27709;
short var_9 = (short)-19739;
unsigned short var_10 = (unsigned short)9700;
signed char var_11 = (signed char)-6;
unsigned char var_12 = (unsigned char)207;
int zero = 0;
signed char var_13 = (signed char)57;
unsigned char var_14 = (unsigned char)30;
unsigned char var_15 = (unsigned char)88;
short var_16 = (short)-30182;
int var_17 = -1799230859;
short var_18 = (short)6511;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)84;
short var_21 = (short)11773;
unsigned char var_22 = (unsigned char)253;
unsigned char var_23 = (unsigned char)160;
unsigned char var_24 = (unsigned char)5;
unsigned char var_25 = (unsigned char)241;
signed char arr_0 [12] ;
signed char arr_1 [12] ;
unsigned short arr_8 [12] [12] [12] ;
unsigned short arr_10 [12] [12] ;
unsigned char arr_11 [12] [12] ;
unsigned short arr_15 [12] [12] [12] [12] [12] ;
unsigned char arr_20 [12] [12] ;
unsigned char arr_18 [12] [12] [12] ;
short arr_22 [12] ;
short arr_25 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)20814;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)35502 : (unsigned short)51151;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)31290;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = (short)-24768;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = (short)-27900;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
