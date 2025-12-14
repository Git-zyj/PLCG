#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26645;
short var_3 = (short)31080;
_Bool var_4 = (_Bool)0;
short var_6 = (short)11211;
short var_7 = (short)-3420;
unsigned char var_8 = (unsigned char)55;
_Bool var_12 = (_Bool)0;
signed char var_14 = (signed char)46;
unsigned char var_15 = (unsigned char)242;
signed char var_17 = (signed char)83;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = -534898087957824862LL;
_Bool var_20 = (_Bool)1;
unsigned short arr_1 [24] ;
unsigned int arr_3 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)21918;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 3959068828U : 3459546929U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
