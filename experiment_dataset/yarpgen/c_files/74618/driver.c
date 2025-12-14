#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)68;
short var_3 = (short)7390;
signed char var_6 = (signed char)45;
short var_11 = (short)-26134;
long long int var_12 = 2593274979784599216LL;
unsigned int var_14 = 3933296409U;
unsigned long long int var_18 = 15245401618504790825ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)22037;
unsigned long long int var_21 = 6460072809916359507ULL;
unsigned int var_22 = 2554094653U;
unsigned long long int var_23 = 9184288894743587140ULL;
unsigned int arr_0 [23] [23] ;
int arr_1 [23] ;
unsigned long long int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 739385583U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -1239670552;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2972604219525131792ULL : 8153249919282459869ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
