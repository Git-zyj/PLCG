#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -983601089;
int var_4 = -491724245;
int var_5 = 1840448776;
int var_7 = -1868837606;
int var_8 = -1892604831;
int var_9 = -786537179;
int var_10 = -406091654;
int var_11 = 1528299643;
int var_12 = -1869856430;
int zero = 0;
int var_15 = -1789302907;
int var_16 = 1383571268;
int var_17 = 1533473656;
int var_18 = 336100845;
int var_19 = 1962893798;
int var_20 = 1037582739;
int var_21 = 1101926743;
int arr_1 [15] ;
int arr_5 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -705045704;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 497321049 : -403682224;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
