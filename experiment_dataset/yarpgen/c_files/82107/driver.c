#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1605933205;
unsigned int var_4 = 1576463595U;
long long int var_5 = -6425306860631201102LL;
unsigned long long int var_6 = 6272896705362340477ULL;
int var_9 = 1964390656;
unsigned char var_10 = (unsigned char)171;
signed char var_14 = (signed char)110;
int zero = 0;
short var_15 = (short)23;
short var_16 = (short)-20772;
unsigned long long int var_17 = 16611024277302336613ULL;
unsigned long long int var_18 = 4724806427427084825ULL;
unsigned char var_19 = (unsigned char)143;
signed char var_20 = (signed char)-2;
unsigned long long int var_21 = 6821694636886596632ULL;
unsigned long long int var_22 = 7683087717873156368ULL;
unsigned long long int arr_0 [16] ;
signed char arr_1 [16] ;
_Bool arr_4 [16] [16] ;
signed char arr_10 [16] [16] [16] [16] ;
unsigned char arr_12 [13] ;
signed char arr_13 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 17039677045862019692ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)100;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
