#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 2905670390674276082ULL;
unsigned short var_8 = (unsigned short)26503;
int var_10 = 2101680851;
_Bool var_11 = (_Bool)1;
short var_13 = (short)-12582;
int zero = 0;
unsigned int var_17 = 3852693187U;
short var_18 = (short)-29668;
_Bool var_19 = (_Bool)0;
long long int arr_0 [15] [15] ;
unsigned char arr_1 [15] ;
unsigned long long int arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = -1444982776281355040LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 15056502781897092979ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
