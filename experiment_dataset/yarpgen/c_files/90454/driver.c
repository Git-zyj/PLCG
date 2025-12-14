#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3220284195U;
unsigned int var_4 = 2456461185U;
unsigned short var_6 = (unsigned short)48946;
unsigned short var_8 = (unsigned short)2673;
int zero = 0;
signed char var_11 = (signed char)18;
unsigned int var_12 = 681228646U;
long long int var_13 = 5468907613279154260LL;
short var_14 = (short)25806;
unsigned long long int var_15 = 4061357970364063010ULL;
short var_16 = (short)-3554;
unsigned long long int var_17 = 1152486910944609326ULL;
short var_18 = (short)23683;
signed char var_19 = (signed char)93;
int var_20 = 1160192774;
signed char arr_0 [20] ;
long long int arr_2 [20] [20] [20] ;
short arr_3 [20] [20] ;
unsigned int arr_4 [20] [20] [20] [20] ;
short arr_5 [20] [20] ;
signed char arr_14 [25] ;
unsigned long long int arr_20 [25] [25] ;
unsigned long long int arr_22 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -5558413122909017963LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (short)8669;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 2092371373U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-9136;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_20 [i_0] [i_1] = 5945835376289030611ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_22 [i_0] [i_1] = 7497669936845429500ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
