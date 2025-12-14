#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)122;
unsigned char var_1 = (unsigned char)48;
signed char var_4 = (signed char)-94;
long long int var_5 = -1749753658309636848LL;
unsigned long long int var_7 = 4124566786951897466ULL;
unsigned char var_8 = (unsigned char)221;
short var_10 = (short)8907;
unsigned int var_12 = 1708385364U;
int zero = 0;
int var_13 = 243286158;
short var_14 = (short)-11018;
unsigned short var_15 = (unsigned short)16855;
unsigned long long int var_16 = 7779318686461866517ULL;
signed char var_17 = (signed char)44;
signed char var_18 = (signed char)-119;
unsigned long long int arr_0 [17] ;
short arr_2 [17] [17] [17] ;
unsigned long long int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 11091667277798104295ULL : 14066810662316743760ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-20190 : (short)-10113;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 2566388962416920353ULL;
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
