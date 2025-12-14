#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)128;
unsigned short var_4 = (unsigned short)43059;
unsigned int var_5 = 1818843535U;
unsigned int var_7 = 2919432241U;
signed char var_8 = (signed char)-33;
long long int var_9 = -5790734285280379271LL;
short var_10 = (short)-12721;
unsigned char var_13 = (unsigned char)138;
int zero = 0;
short var_14 = (short)-6717;
unsigned long long int var_15 = 1831190770831278536ULL;
short var_16 = (short)11345;
unsigned int var_17 = 530474691U;
long long int var_18 = 5593119575158641694LL;
short var_19 = (short)23873;
_Bool arr_0 [17] ;
signed char arr_1 [17] ;
unsigned char arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)151;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
