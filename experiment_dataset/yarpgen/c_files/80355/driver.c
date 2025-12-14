#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3151925432U;
short var_4 = (short)8405;
long long int var_10 = 3097029766043622213LL;
long long int var_14 = -3940559583054807848LL;
int zero = 0;
unsigned char var_15 = (unsigned char)247;
unsigned long long int var_16 = 828861892944890077ULL;
unsigned long long int var_17 = 668715441111556468ULL;
unsigned char var_18 = (unsigned char)198;
short var_19 = (short)-22243;
_Bool var_20 = (_Bool)1;
long long int arr_0 [25] ;
int arr_1 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -8478801011439936410LL : -4903632494338367726LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? -1691785505 : -613100811;
}

void checksum() {
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
