#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2388422574U;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)4773;
unsigned int var_4 = 3680330177U;
int var_6 = -523750571;
short var_8 = (short)2472;
signed char var_9 = (signed char)39;
signed char var_10 = (signed char)-4;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 1275936503U;
unsigned char var_18 = (unsigned char)26;
unsigned short var_19 = (unsigned short)41881;
int var_20 = 1199798447;
unsigned int var_21 = 3197612372U;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
unsigned short arr_0 [15] ;
unsigned char arr_6 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)10920;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)47;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
