#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)183;
unsigned short var_7 = (unsigned short)36229;
short var_10 = (short)-11806;
short var_14 = (short)18722;
short var_15 = (short)27142;
int zero = 0;
short var_16 = (short)-29860;
int var_17 = -125712416;
short var_18 = (short)13834;
short var_19 = (short)15578;
signed char var_20 = (signed char)91;
short var_21 = (short)7603;
unsigned long long int arr_0 [25] ;
short arr_1 [25] [25] ;
unsigned short arr_2 [25] [25] [25] ;
unsigned int arr_3 [25] ;
short arr_4 [25] ;
_Bool arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1551442770327932159ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (short)31553;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)22100;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 1952301814U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)-28957;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
