#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-104;
signed char var_3 = (signed char)-53;
unsigned char var_5 = (unsigned char)77;
long long int var_6 = 7524556944092434860LL;
unsigned char var_8 = (unsigned char)66;
signed char var_9 = (signed char)82;
signed char var_10 = (signed char)106;
signed char var_12 = (signed char)-101;
unsigned int var_14 = 3639772814U;
signed char var_15 = (signed char)123;
signed char var_16 = (signed char)-29;
unsigned short var_17 = (unsigned short)54484;
signed char var_19 = (signed char)-48;
int zero = 0;
long long int var_20 = -3007902435648971193LL;
signed char var_21 = (signed char)13;
short arr_0 [16] ;
unsigned char arr_2 [16] [16] ;
unsigned short arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)7778;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)77 : (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)62853 : (unsigned short)41797;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
