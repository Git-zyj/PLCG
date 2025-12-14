#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 579460983U;
unsigned int var_1 = 3651548276U;
unsigned int var_2 = 2031121539U;
unsigned int var_3 = 3919758198U;
unsigned int var_4 = 3688584542U;
unsigned int var_6 = 1247077308U;
unsigned int var_7 = 539459675U;
unsigned int var_8 = 924572833U;
int zero = 0;
unsigned int var_10 = 4019385002U;
unsigned int var_11 = 737771889U;
unsigned int var_12 = 3796079413U;
unsigned int var_13 = 3053465823U;
unsigned int var_14 = 3612765438U;
unsigned int var_15 = 453005250U;
unsigned int var_16 = 928280548U;
unsigned int var_17 = 1576978366U;
unsigned int var_18 = 2457461298U;
unsigned int var_19 = 672561886U;
unsigned int arr_2 [21] ;
unsigned int arr_3 [21] [21] [21] ;
unsigned int arr_5 [21] [21] [21] ;
unsigned int arr_8 [21] [21] ;
unsigned int arr_10 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 3218480589U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2254099496U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 46396639U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = 1031978509U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 4188575425U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
