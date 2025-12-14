#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5403527786897667070LL;
long long int var_5 = 5895170194809532496LL;
long long int var_7 = 9219398420306074731LL;
long long int var_12 = -2261871862007700201LL;
long long int var_17 = -1590150481811034453LL;
int zero = 0;
long long int var_18 = 8871481762771824520LL;
long long int var_19 = 1250291402522355247LL;
long long int var_20 = 2935632988862944725LL;
long long int var_21 = -8600630322702854324LL;
long long int var_22 = 8678970005900353199LL;
long long int arr_0 [23] ;
long long int arr_8 [23] [23] [23] [23] ;
long long int arr_9 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = -3849418446385677552LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -6978125984353175476LL : -2253220381876195972LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -5804864196769006836LL : -4024569268881844376LL;
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
