#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3055150350U;
unsigned int var_2 = 2961128789U;
unsigned int var_4 = 1076593999U;
unsigned int var_6 = 3833309107U;
unsigned int var_11 = 3755995085U;
unsigned int var_15 = 2555086555U;
int zero = 0;
unsigned int var_17 = 2134127468U;
unsigned int var_18 = 310291470U;
unsigned int var_19 = 4244110818U;
unsigned int var_20 = 155473022U;
unsigned int var_21 = 678880142U;
unsigned int var_22 = 618369353U;
unsigned int var_23 = 2320789300U;
unsigned int var_24 = 2257043408U;
unsigned int var_25 = 2819860320U;
unsigned int var_26 = 270704077U;
unsigned int var_27 = 1937943200U;
unsigned int var_28 = 2011526094U;
unsigned int var_29 = 110400030U;
unsigned int arr_0 [10] ;
unsigned int arr_1 [10] [10] ;
unsigned int arr_2 [10] [10] ;
unsigned int arr_3 [10] ;
unsigned int arr_4 [10] ;
unsigned int arr_6 [23] ;
unsigned int arr_7 [23] ;
unsigned int arr_8 [23] [23] ;
unsigned int arr_9 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 776571623U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 2909361161U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 1241192540U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 1778096316U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 4043186491U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 551056445U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 2043419U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = 2407519211U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 3845774566U;
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
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
