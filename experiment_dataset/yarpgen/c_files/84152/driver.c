#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3590972922031295059ULL;
unsigned long long int var_1 = 2410158546665941402ULL;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 12989027U;
_Bool var_6 = (_Bool)0;
int var_7 = -1650785530;
int var_11 = 56614974;
unsigned char var_12 = (unsigned char)142;
short var_14 = (short)19841;
short var_15 = (short)27847;
signed char var_16 = (signed char)63;
unsigned int var_17 = 2400922175U;
unsigned short var_18 = (unsigned short)25509;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-119;
unsigned long long int var_22 = 5109081393078465350ULL;
unsigned short var_23 = (unsigned short)58177;
unsigned char var_24 = (unsigned char)28;
signed char arr_0 [17] [17] ;
signed char arr_1 [17] ;
unsigned long long int arr_2 [17] ;
unsigned short arr_3 [17] ;
signed char arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)91 : (signed char)-110;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 8151781771031719013ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)48664 : (unsigned short)30830;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-111 : (signed char)11;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
