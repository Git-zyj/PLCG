#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1294204764U;
unsigned char var_2 = (unsigned char)12;
int var_3 = 1052274008;
long long int var_4 = 8722068871882863099LL;
unsigned long long int var_5 = 11968762246758914247ULL;
short var_7 = (short)-18323;
signed char var_8 = (signed char)41;
int zero = 0;
int var_12 = 1560236562;
unsigned char var_13 = (unsigned char)241;
_Bool var_14 = (_Bool)1;
signed char arr_0 [25] ;
unsigned char arr_1 [25] ;
unsigned short arr_2 [25] [25] [25] ;
long long int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)-54;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)25922 : (unsigned short)35286;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -6539977376353949776LL : 8267189494683208646LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
