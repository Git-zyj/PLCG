#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-27401;
_Bool var_5 = (_Bool)1;
unsigned int var_8 = 1640308358U;
signed char var_10 = (signed char)-70;
int zero = 0;
unsigned long long int var_11 = 2301413753673168842ULL;
short var_12 = (short)6043;
unsigned short var_13 = (unsigned short)49663;
short var_14 = (short)-24939;
short arr_0 [14] [14] ;
int arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (short)14605;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 1264256266;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
