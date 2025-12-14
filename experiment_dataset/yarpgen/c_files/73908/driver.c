#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16660;
unsigned char var_1 = (unsigned char)55;
unsigned short var_2 = (unsigned short)33937;
int var_3 = -956894761;
short var_6 = (short)-19738;
int var_8 = 147404151;
int var_9 = 2041390483;
long long int var_10 = -942481533794386167LL;
long long int var_11 = 8912204741619898555LL;
int zero = 0;
unsigned char var_12 = (unsigned char)116;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)4689;
unsigned int var_15 = 1707464118U;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)255;
unsigned long long int var_18 = 2686165502078200837ULL;
unsigned short var_19 = (unsigned short)25484;
short var_20 = (short)6976;
_Bool var_21 = (_Bool)1;
signed char arr_1 [16] ;
int arr_2 [16] ;
short arr_3 [16] ;
unsigned int arr_13 [11] [11] ;
signed char arr_22 [11] [11] [11] ;
unsigned long long int arr_25 [11] [11] [11] [11] [11] ;
_Bool arr_14 [11] [11] [11] [11] ;
int arr_15 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-18;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 1974551746;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)32305;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 1335632067U : 96380941U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = 6645166445742226893ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? 1364716812 : -641473774;
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
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
