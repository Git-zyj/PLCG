#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_3 = (short)12489;
unsigned short var_4 = (unsigned short)27984;
unsigned int var_5 = 1191452537U;
int var_8 = 2024685775;
int var_10 = 1177038121;
int var_13 = -604966020;
short var_15 = (short)-12875;
int zero = 0;
unsigned int var_16 = 4187202981U;
short var_17 = (short)16811;
unsigned short var_18 = (unsigned short)5095;
unsigned int var_19 = 1512236362U;
_Bool var_20 = (_Bool)1;
long long int var_21 = -4091955520825191056LL;
unsigned int var_22 = 3091521517U;
long long int arr_1 [21] [21] ;
unsigned long long int arr_3 [24] [24] ;
unsigned char arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 534608813807078670LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 17274323853619660016ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)193;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
