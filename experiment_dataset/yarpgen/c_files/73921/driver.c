#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4402285961171491996LL;
_Bool var_4 = (_Bool)1;
unsigned short var_8 = (unsigned short)60674;
unsigned int var_9 = 963270626U;
unsigned int var_10 = 520893303U;
unsigned short var_11 = (unsigned short)56457;
int zero = 0;
unsigned int var_13 = 3853210174U;
unsigned int var_14 = 3847398429U;
unsigned int var_15 = 2052486204U;
int var_16 = 1451792127;
int var_17 = -16175856;
unsigned int var_18 = 213065108U;
unsigned int var_19 = 2224693899U;
unsigned char arr_0 [12] ;
unsigned int arr_3 [18] [18] ;
unsigned char arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 3411130139U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)234;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
