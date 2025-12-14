#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
unsigned short var_1 = (unsigned short)53063;
short var_2 = (short)10301;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-7756;
unsigned int var_6 = 2705605873U;
signed char var_7 = (signed char)22;
unsigned short var_8 = (unsigned short)2826;
int zero = 0;
unsigned short var_16 = (unsigned short)102;
int var_17 = 774727467;
unsigned short var_18 = (unsigned short)58253;
unsigned short var_19 = (unsigned short)24671;
signed char var_20 = (signed char)-38;
unsigned int var_21 = 2411197096U;
unsigned int var_22 = 2114458294U;
unsigned char var_23 = (unsigned char)168;
long long int var_24 = 7308763949187044979LL;
short arr_0 [20] ;
unsigned short arr_1 [20] ;
unsigned short arr_5 [20] ;
unsigned char arr_6 [20] [20] [20] ;
unsigned char arr_9 [20] [20] [20] [20] [20] ;
unsigned char arr_11 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)23853;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)44170;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned short)22531;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned char)87;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
