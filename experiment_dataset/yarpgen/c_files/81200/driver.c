#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 547406039U;
int var_4 = 1566909544;
short var_6 = (short)-3337;
unsigned long long int var_7 = 10065147319542717421ULL;
unsigned char var_9 = (unsigned char)214;
signed char var_13 = (signed char)-109;
int var_19 = -608196859;
int zero = 0;
unsigned short var_20 = (unsigned short)9197;
signed char var_21 = (signed char)63;
int var_22 = 1456891438;
short var_23 = (short)22975;
unsigned int var_24 = 530894472U;
int var_25 = -1217956842;
short var_26 = (short)947;
int var_27 = -1094037879;
unsigned char var_28 = (unsigned char)37;
int arr_0 [23] ;
unsigned char arr_1 [23] [23] ;
unsigned int arr_2 [23] ;
int arr_3 [23] [23] ;
int arr_4 [23] [23] ;
unsigned short arr_5 [23] ;
unsigned char arr_9 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 815725092;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1086863642U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 1990136819;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 2034138799;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)40063;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (unsigned char)39;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
