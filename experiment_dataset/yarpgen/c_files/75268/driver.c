#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5544143786113484708LL;
long long int var_1 = -5312869548334817034LL;
long long int var_2 = -1140011946481824796LL;
signed char var_3 = (signed char)120;
unsigned short var_4 = (unsigned short)63737;
_Bool var_5 = (_Bool)1;
short var_6 = (short)4663;
short var_7 = (short)-18297;
unsigned short var_8 = (unsigned short)57235;
long long int var_9 = 4474364987561400828LL;
long long int var_10 = 4192667305560661615LL;
int zero = 0;
unsigned short var_11 = (unsigned short)44870;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-68;
long long int var_14 = 5319878179614735507LL;
long long int var_15 = 3915472443037590705LL;
_Bool arr_0 [18] ;
unsigned short arr_1 [18] ;
unsigned short arr_3 [18] [18] [18] ;
unsigned short arr_4 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)31985;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)46745;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)62268;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
