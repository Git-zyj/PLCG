#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)47;
unsigned long long int var_3 = 12800043006411915737ULL;
signed char var_5 = (signed char)51;
short var_7 = (short)-25245;
int var_9 = 1782117267;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)44170;
int var_12 = 1790143614;
unsigned short var_13 = (unsigned short)61944;
unsigned char var_14 = (unsigned char)107;
signed char var_15 = (signed char)96;
unsigned char var_16 = (unsigned char)26;
short var_17 = (short)11674;
unsigned char var_18 = (unsigned char)247;
int var_19 = 1990430182;
int arr_0 [14] [14] ;
unsigned char arr_1 [14] ;
unsigned char arr_2 [14] ;
unsigned short arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = -1674149631;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)25305 : (unsigned short)53515;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
