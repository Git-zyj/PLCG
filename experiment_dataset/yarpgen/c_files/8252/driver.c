#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3079558472U;
unsigned long long int var_2 = 17804173834900468039ULL;
unsigned int var_3 = 3518347374U;
unsigned char var_5 = (unsigned char)165;
unsigned int var_6 = 2936477264U;
int zero = 0;
unsigned int var_10 = 3849354481U;
long long int var_11 = -2565051031223795435LL;
long long int var_12 = 977640772966495105LL;
unsigned short var_13 = (unsigned short)33295;
int var_14 = 39010364;
unsigned int arr_1 [19] ;
long long int arr_2 [19] ;
unsigned char arr_4 [19] [19] [19] ;
unsigned int arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 2791226542U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -7938227999193858256LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 2661586754U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
