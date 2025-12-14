#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59868;
short var_2 = (short)22779;
short var_6 = (short)8478;
unsigned short var_7 = (unsigned short)44291;
unsigned long long int var_10 = 17376121707953053869ULL;
unsigned int var_13 = 102614888U;
unsigned char var_14 = (unsigned char)136;
unsigned short var_15 = (unsigned short)2009;
int zero = 0;
unsigned short var_20 = (unsigned short)4840;
signed char var_21 = (signed char)100;
_Bool var_22 = (_Bool)0;
int var_23 = -1466580441;
_Bool var_24 = (_Bool)1;
unsigned int var_25 = 1064612581U;
long long int arr_0 [17] ;
unsigned int arr_2 [17] ;
_Bool arr_3 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 3973193419656763213LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 722283108U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
