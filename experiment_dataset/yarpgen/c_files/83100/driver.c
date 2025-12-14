#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1091321702;
unsigned char var_2 = (unsigned char)55;
long long int var_5 = 6581029095376672266LL;
unsigned char var_8 = (unsigned char)225;
long long int var_9 = 8680369614068918094LL;
int zero = 0;
unsigned char var_10 = (unsigned char)55;
unsigned int var_11 = 1010318602U;
unsigned char var_12 = (unsigned char)251;
unsigned char var_13 = (unsigned char)76;
signed char var_14 = (signed char)-58;
int arr_2 [16] ;
long long int arr_3 [16] ;
int arr_4 [16] ;
long long int arr_5 [16] [16] ;
short arr_11 [19] [19] ;
long long int arr_15 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -730754141;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -2688671682937559293LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -1213451845;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 1422654496460564192LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = (short)-15972;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = -5433962803453316653LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
