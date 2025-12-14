#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32445;
unsigned short var_1 = (unsigned short)44768;
signed char var_3 = (signed char)69;
short var_6 = (short)15267;
unsigned short var_7 = (unsigned short)27109;
signed char var_12 = (signed char)46;
signed char var_13 = (signed char)17;
unsigned short var_14 = (unsigned short)12833;
unsigned long long int var_16 = 18302118086177406324ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)32405;
signed char var_18 = (signed char)-12;
short var_19 = (short)7449;
int var_20 = 583313372;
short var_21 = (short)17197;
long long int var_22 = 2377119529125109973LL;
unsigned char var_23 = (unsigned char)44;
unsigned short var_24 = (unsigned short)18194;
signed char var_25 = (signed char)47;
short var_26 = (short)30117;
int var_27 = 21219179;
unsigned char var_28 = (unsigned char)8;
_Bool arr_1 [23] [23] ;
int arr_2 [23] ;
long long int arr_4 [23] [23] ;
int arr_5 [23] [23] ;
unsigned int arr_7 [23] [23] [23] ;
unsigned char arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -630774258 : 1023096256;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 1738347968874645708LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = -619349895;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1071982130U : 284814035U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)98 : (unsigned char)92;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
