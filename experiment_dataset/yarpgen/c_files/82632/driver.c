#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3208920929662523443LL;
unsigned int var_2 = 1634332993U;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1349185427U;
unsigned short var_7 = (unsigned short)44588;
long long int var_8 = 4360637020862209999LL;
long long int var_10 = -3547967079169226663LL;
unsigned int var_11 = 3185089405U;
int zero = 0;
long long int var_13 = 7186577404259199165LL;
short var_14 = (short)-14433;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-109;
unsigned char var_17 = (unsigned char)11;
unsigned short var_18 = (unsigned short)45105;
_Bool arr_1 [12] ;
signed char arr_4 [12] [12] [12] [12] ;
unsigned int arr_7 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 412997973U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
