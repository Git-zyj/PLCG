#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20775;
long long int var_1 = 3674746743718030825LL;
unsigned short var_2 = (unsigned short)44890;
signed char var_3 = (signed char)62;
signed char var_4 = (signed char)17;
unsigned int var_5 = 1929701294U;
long long int var_6 = 7571136125411167454LL;
int var_8 = -1561581474;
_Bool var_9 = (_Bool)1;
long long int var_10 = -7221064728370236640LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-77;
unsigned short var_16 = (unsigned short)46665;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)63;
_Bool arr_0 [11] ;
unsigned int arr_4 [11] [11] [11] ;
int arr_7 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3142942547U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 293086765 : 888597734;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
