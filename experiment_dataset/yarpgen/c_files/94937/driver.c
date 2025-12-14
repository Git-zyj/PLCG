#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-5;
unsigned short var_6 = (unsigned short)63087;
_Bool var_7 = (_Bool)0;
long long int var_8 = -5177327883309118684LL;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)58;
signed char var_12 = (signed char)94;
int zero = 0;
unsigned short var_13 = (unsigned short)8748;
unsigned char var_14 = (unsigned char)244;
unsigned char var_15 = (unsigned char)149;
unsigned short var_16 = (unsigned short)39191;
signed char var_17 = (signed char)-14;
short arr_0 [22] [22] ;
unsigned char arr_1 [22] ;
unsigned short arr_2 [22] [22] [22] ;
unsigned short arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (short)22998;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)23494;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned short)55934;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
