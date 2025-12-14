#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-14;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)50376;
int zero = 0;
int var_14 = 38639685;
int var_15 = 1974269705;
unsigned char var_16 = (unsigned char)191;
long long int var_17 = 8116925466939626981LL;
long long int var_18 = 4931669797202371614LL;
unsigned char arr_0 [13] ;
signed char arr_3 [13] ;
int arr_5 [13] [13] [13] [13] ;
unsigned char arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 140459471;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (unsigned char)40;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
