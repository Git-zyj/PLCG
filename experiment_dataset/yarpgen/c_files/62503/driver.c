#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)20429;
_Bool var_4 = (_Bool)0;
short var_5 = (short)5064;
unsigned char var_11 = (unsigned char)141;
unsigned short var_15 = (unsigned short)22734;
int zero = 0;
unsigned int var_16 = 3929806373U;
unsigned int var_17 = 2709181607U;
short var_18 = (short)22842;
long long int var_19 = -8740221080080379388LL;
unsigned int arr_0 [14] ;
unsigned char arr_1 [14] [14] ;
unsigned char arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 910321390U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)174;
}

void checksum() {
    hash(&seed, var_16);
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
