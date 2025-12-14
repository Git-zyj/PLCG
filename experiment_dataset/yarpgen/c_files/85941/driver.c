#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 619214184;
long long int var_5 = -6825853244799048706LL;
int var_7 = 1191587787;
_Bool var_8 = (_Bool)1;
unsigned char var_11 = (unsigned char)90;
short var_12 = (short)18219;
signed char var_16 = (signed char)28;
unsigned short var_17 = (unsigned short)15078;
int zero = 0;
int var_19 = -2129256604;
unsigned int var_20 = 2261521885U;
short var_21 = (short)-1632;
unsigned char var_22 = (unsigned char)158;
unsigned char arr_0 [13] ;
short arr_2 [13] ;
short arr_4 [13] [13] ;
long long int arr_6 [13] ;
unsigned int arr_8 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)10181;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (short)14606;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = -1086550705162843807LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = 1924849013U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
