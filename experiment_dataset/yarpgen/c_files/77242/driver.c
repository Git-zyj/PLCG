#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1223095264;
_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 6963222822839658706ULL;
unsigned int var_5 = 2832417828U;
unsigned short var_6 = (unsigned short)38317;
unsigned short var_7 = (unsigned short)57430;
int var_8 = -1233563215;
short var_9 = (short)-23574;
int var_13 = 1416909967;
_Bool var_15 = (_Bool)1;
unsigned long long int var_17 = 5889503249921918878ULL;
signed char var_18 = (signed char)62;
int zero = 0;
unsigned short var_19 = (unsigned short)35729;
unsigned int var_20 = 3764006840U;
unsigned short var_21 = (unsigned short)59841;
int var_22 = 312321870;
unsigned char var_23 = (unsigned char)106;
unsigned long long int var_24 = 13166425871709336967ULL;
signed char var_25 = (signed char)-61;
int arr_0 [23] ;
long long int arr_1 [23] [23] ;
signed char arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1770013849;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 2378765844883972239LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)121;
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
