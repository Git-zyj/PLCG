#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-59;
short var_2 = (short)-9296;
short var_4 = (short)10359;
unsigned int var_8 = 4161863860U;
short var_12 = (short)-6499;
signed char var_17 = (signed char)66;
signed char var_18 = (signed char)60;
int zero = 0;
signed char var_19 = (signed char)-32;
unsigned int var_20 = 1796550735U;
unsigned int var_21 = 2391657690U;
unsigned int var_22 = 3351106980U;
unsigned int var_23 = 885515108U;
signed char var_24 = (signed char)91;
short var_25 = (short)11834;
unsigned int arr_0 [21] ;
signed char arr_3 [21] [21] ;
short arr_4 [21] [21] ;
signed char arr_5 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 2372821642U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-9 : (signed char)15;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-159 : (short)1899;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)2 : (signed char)-40;
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
