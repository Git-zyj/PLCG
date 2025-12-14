#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)108;
int var_3 = -517764578;
unsigned int var_4 = 968643614U;
unsigned short var_7 = (unsigned short)11722;
unsigned char var_8 = (unsigned char)16;
short var_9 = (short)-25015;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_14 = (short)4033;
unsigned int var_15 = 1307413600U;
unsigned short var_16 = (unsigned short)28614;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-4512;
int var_19 = -1069317546;
_Bool var_20 = (_Bool)1;
signed char arr_0 [14] [14] ;
signed char arr_1 [14] ;
signed char arr_2 [14] [14] ;
unsigned short arr_3 [14] ;
unsigned char arr_4 [14] [14] [14] ;
_Bool arr_6 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)33718 : (unsigned short)18070;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)138 : (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
