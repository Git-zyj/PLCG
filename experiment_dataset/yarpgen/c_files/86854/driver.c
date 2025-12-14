#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1456173745;
int var_1 = 1994799988;
int var_2 = -821824887;
int var_3 = -1732508447;
int var_5 = -1546987000;
int var_6 = 1227636885;
int var_7 = 966600700;
int var_8 = 1153569269;
int var_9 = -16718701;
int var_11 = -1491621046;
int zero = 0;
int var_12 = -282644189;
int var_13 = -1766666694;
int var_14 = -747366742;
int var_15 = 1787158367;
int var_16 = -840319367;
int var_17 = 1941178409;
int arr_1 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 2106873140;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
