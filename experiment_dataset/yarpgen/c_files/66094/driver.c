#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)119;
_Bool var_2 = (_Bool)0;
short var_5 = (short)-4142;
unsigned char var_11 = (unsigned char)117;
unsigned char var_12 = (unsigned char)12;
long long int var_14 = -7199664130298188300LL;
long long int var_15 = -3874186496764199402LL;
int zero = 0;
signed char var_16 = (signed char)-33;
long long int var_17 = -7915844080513334821LL;
short var_18 = (short)23419;
int arr_0 [17] [17] ;
signed char arr_1 [17] ;
unsigned long long int arr_2 [17] ;
long long int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 865161362;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 4227646383241044794ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -484923912162926457LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
