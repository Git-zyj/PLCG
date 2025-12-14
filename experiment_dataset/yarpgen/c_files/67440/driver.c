#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1559866236;
short var_2 = (short)-11761;
short var_3 = (short)-7254;
int var_4 = -264054480;
unsigned short var_5 = (unsigned short)21058;
short var_7 = (short)-9647;
short var_9 = (short)-25968;
signed char var_10 = (signed char)-123;
int zero = 0;
unsigned long long int var_11 = 8057540208596591600ULL;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)53;
signed char var_14 = (signed char)-74;
short var_15 = (short)-24151;
signed char var_16 = (signed char)17;
short var_17 = (short)30462;
_Bool var_18 = (_Bool)0;
short var_19 = (short)11455;
unsigned short arr_0 [20] ;
short arr_1 [20] ;
unsigned short arr_2 [20] ;
unsigned short arr_5 [10] ;
int arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)39133;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)22189;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)53004;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)36447 : (unsigned short)6689;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1193199556 : 518352912;
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
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
