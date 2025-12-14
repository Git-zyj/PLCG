#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-81;
unsigned long long int var_3 = 8042987974973776194ULL;
unsigned int var_4 = 834857559U;
unsigned char var_5 = (unsigned char)108;
_Bool var_6 = (_Bool)1;
long long int var_8 = 2199522341439977121LL;
int zero = 0;
long long int var_11 = 2784870252654489807LL;
int var_12 = -947253411;
signed char var_13 = (signed char)-16;
unsigned char var_14 = (unsigned char)23;
int var_15 = -1401535885;
unsigned short var_16 = (unsigned short)64164;
unsigned char var_17 = (unsigned char)100;
short var_18 = (short)-8059;
unsigned int arr_0 [10] [10] ;
int arr_1 [10] [10] ;
long long int arr_11 [21] ;
int arr_13 [21] ;
unsigned long long int arr_14 [21] [21] [21] ;
signed char arr_15 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 3103803430U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? -2126736234 : 1885336061;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = -8679681164805521018LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = -878556731;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 12717141892167482907ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)19;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
