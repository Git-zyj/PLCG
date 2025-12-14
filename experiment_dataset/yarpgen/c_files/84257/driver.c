#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)12233;
unsigned long long int var_4 = 1909048789756964634ULL;
int var_5 = -790967510;
unsigned long long int var_6 = 14273596360174794129ULL;
int var_7 = -253977790;
long long int var_13 = -8096813819469533430LL;
unsigned long long int var_15 = 10116922709079315965ULL;
int zero = 0;
short var_20 = (short)-5643;
short var_21 = (short)-16794;
unsigned long long int var_22 = 14110881959954530586ULL;
int var_23 = 927264184;
int arr_0 [13] ;
unsigned long long int arr_1 [13] ;
short arr_2 [13] [13] [13] ;
int arr_3 [13] ;
signed char arr_4 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 2111270684;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 4635237132872838696ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)29046;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 1047000957;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)96;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
