#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-80;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)-77;
short var_6 = (short)-8413;
int var_8 = -1731835698;
unsigned char var_11 = (unsigned char)66;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-102;
signed char var_15 = (signed char)114;
signed char var_16 = (signed char)-55;
signed char var_17 = (signed char)-28;
unsigned short arr_1 [22] ;
unsigned int arr_3 [22] ;
unsigned short arr_4 [22] [22] [22] [22] ;
signed char arr_6 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)65450;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 2435378125U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (unsigned short)10606;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)84;
}

void checksum() {
    hash(&seed, var_13);
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
