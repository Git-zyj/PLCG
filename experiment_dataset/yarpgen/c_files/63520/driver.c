#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3413970864U;
unsigned long long int var_4 = 4158685382616032893ULL;
unsigned char var_7 = (unsigned char)225;
int var_8 = 1430974668;
long long int var_9 = -7076004968998976456LL;
short var_14 = (short)-5479;
int zero = 0;
unsigned short var_18 = (unsigned short)40315;
signed char var_19 = (signed char)59;
_Bool arr_6 [19] [19] ;
unsigned short arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)21906 : (unsigned short)4063;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
