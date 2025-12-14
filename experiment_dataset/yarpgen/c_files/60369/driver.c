#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2057356776;
unsigned char var_1 = (unsigned char)185;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 12559169203932538893ULL;
unsigned char var_4 = (unsigned char)104;
unsigned long long int var_5 = 10103788005033283407ULL;
unsigned int var_8 = 461760505U;
long long int var_9 = -7555297995570107090LL;
signed char var_10 = (signed char)-108;
unsigned short var_11 = (unsigned short)29246;
unsigned int var_12 = 2047864725U;
signed char var_14 = (signed char)-98;
unsigned short var_15 = (unsigned short)55691;
short var_16 = (short)-8429;
int zero = 0;
unsigned int var_19 = 4222289513U;
signed char var_20 = (signed char)110;
long long int var_21 = 3975370618188692956LL;
_Bool var_22 = (_Bool)1;
int var_23 = -547183717;
long long int var_24 = -8300022647221228633LL;
_Bool var_25 = (_Bool)0;
unsigned short arr_0 [16] ;
signed char arr_1 [16] ;
unsigned short arr_3 [16] [16] ;
unsigned char arr_4 [16] [16] [16] ;
signed char arr_5 [16] ;
unsigned int arr_6 [16] [16] [16] ;
signed char arr_7 [16] [16] [16] [16] [16] ;
long long int arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)31009;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)24295;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2645278714U : 3021600188U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (signed char)-31 : (signed char)7;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = -1748095227337720612LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
