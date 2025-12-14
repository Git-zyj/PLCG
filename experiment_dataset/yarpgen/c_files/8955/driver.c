#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5318726000100850616LL;
long long int var_3 = 5972523578810051018LL;
unsigned short var_6 = (unsigned short)58429;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 947131823U;
unsigned char var_9 = (unsigned char)165;
signed char var_10 = (signed char)13;
int zero = 0;
unsigned long long int var_12 = 7338305859601876078ULL;
long long int var_13 = 1544867240815597479LL;
unsigned int var_14 = 2113610431U;
short var_15 = (short)24716;
unsigned char var_16 = (unsigned char)131;
long long int arr_3 [22] ;
unsigned int arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -7093860236647440267LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 3942960544U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
