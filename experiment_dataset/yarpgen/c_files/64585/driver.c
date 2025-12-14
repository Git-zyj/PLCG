#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64295;
unsigned short var_1 = (unsigned short)9221;
unsigned int var_2 = 1851182386U;
unsigned short var_4 = (unsigned short)43788;
unsigned short var_5 = (unsigned short)4450;
unsigned short var_9 = (unsigned short)41588;
unsigned short var_10 = (unsigned short)31065;
unsigned int var_12 = 755035026U;
unsigned int var_14 = 1567604299U;
unsigned int var_15 = 1101443661U;
unsigned int var_16 = 1932673592U;
int zero = 0;
unsigned short var_19 = (unsigned short)17917;
unsigned short var_20 = (unsigned short)62176;
unsigned int var_21 = 3690383523U;
unsigned int var_22 = 1310375031U;
unsigned int var_23 = 3555313085U;
unsigned int arr_1 [22] [22] ;
unsigned short arr_2 [22] ;
unsigned int arr_3 [22] [22] ;
unsigned int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 3806017914U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)11390;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 4236094624U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 1716388697U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
