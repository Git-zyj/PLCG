#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1341138243U;
short var_1 = (short)-10363;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 402077879U;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 440500122290663918ULL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
int zero = 0;
int var_10 = 1770780230;
signed char var_11 = (signed char)104;
_Bool var_12 = (_Bool)0;
unsigned char arr_0 [17] ;
unsigned short arr_1 [17] ;
long long int arr_3 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)28318;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 55695705724157482LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
