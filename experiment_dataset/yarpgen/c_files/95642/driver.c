#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)(-127 - 1);
signed char var_1 = (signed char)92;
signed char var_3 = (signed char)106;
int var_5 = -1168744884;
unsigned long long int var_11 = 5022195834376332178ULL;
short var_13 = (short)-18333;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)12660;
int zero = 0;
long long int var_18 = -4829894865849605146LL;
unsigned long long int var_19 = 11866290203859690387ULL;
int var_20 = -900457311;
long long int var_21 = -2629618904300676575LL;
unsigned char var_22 = (unsigned char)139;
unsigned long long int arr_1 [16] [16] ;
signed char arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 13230289118488189913ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (signed char)45;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
