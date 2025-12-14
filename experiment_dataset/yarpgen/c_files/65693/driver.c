#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 613392644U;
short var_1 = (short)231;
short var_6 = (short)10006;
short var_9 = (short)3625;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)101;
int zero = 0;
long long int var_14 = -7907858296063197765LL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 10368595213056295447ULL;
long long int var_17 = 4950335460736411415LL;
unsigned int var_18 = 1482146664U;
unsigned short var_19 = (unsigned short)26629;
unsigned char var_20 = (unsigned char)49;
unsigned char var_21 = (unsigned char)30;
unsigned int var_22 = 2589337383U;
unsigned char arr_2 [13] ;
unsigned int arr_4 [13] ;
unsigned int arr_12 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 3466144434U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 2425367105U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
