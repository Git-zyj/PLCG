#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13177;
unsigned char var_2 = (unsigned char)77;
unsigned char var_5 = (unsigned char)18;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)68;
unsigned short var_11 = (unsigned short)8002;
unsigned char var_13 = (unsigned char)166;
int zero = 0;
long long int var_14 = 7666919856281384429LL;
long long int var_15 = 3674224542295130629LL;
unsigned int var_16 = 912402328U;
signed char var_17 = (signed char)39;
unsigned short arr_0 [16] ;
int arr_1 [16] ;
int arr_2 [16] [16] ;
unsigned short arr_3 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)55897;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -892823580;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 1039690951;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)48507;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
