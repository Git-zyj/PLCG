#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1469205522U;
unsigned int var_2 = 855549369U;
unsigned int var_3 = 2837825929U;
unsigned int var_4 = 2543225089U;
unsigned int var_5 = 712567086U;
unsigned int var_6 = 2161427596U;
unsigned int var_9 = 3335929406U;
unsigned int var_14 = 1409645300U;
int zero = 0;
unsigned int var_16 = 2068970481U;
unsigned int var_17 = 421905060U;
unsigned int var_18 = 210552533U;
unsigned int var_19 = 2445897690U;
unsigned int var_20 = 3013973614U;
unsigned int var_21 = 374129969U;
unsigned int var_22 = 3927601946U;
unsigned int var_23 = 2165252733U;
unsigned int var_24 = 716804179U;
unsigned int arr_3 [11] [11] [11] ;
unsigned int arr_5 [11] [11] [11] ;
unsigned int arr_12 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1529772611U : 2897181948U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3463076687U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = 2310586253U;
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
