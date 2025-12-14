#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5391812308887395538LL;
unsigned char var_2 = (unsigned char)246;
long long int var_5 = -714075937403808486LL;
_Bool var_6 = (_Bool)1;
short var_11 = (short)-24748;
signed char var_12 = (signed char)-115;
signed char var_14 = (signed char)50;
int zero = 0;
unsigned char var_15 = (unsigned char)229;
signed char var_16 = (signed char)6;
unsigned short var_17 = (unsigned short)39897;
signed char var_18 = (signed char)-124;
short var_19 = (short)-30591;
unsigned int var_20 = 1387657807U;
unsigned short var_21 = (unsigned short)2017;
int var_22 = -1923644228;
unsigned char arr_1 [18] ;
unsigned int arr_3 [20] ;
unsigned short arr_4 [20] ;
signed char arr_6 [20] [20] ;
signed char arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 3222868181U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned short)56875;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)98;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
