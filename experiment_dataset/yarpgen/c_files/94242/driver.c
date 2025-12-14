#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-29673;
unsigned int var_6 = 2962753785U;
unsigned int var_7 = 2893415173U;
short var_8 = (short)-14213;
unsigned int var_9 = 1667633320U;
unsigned short var_10 = (unsigned short)57263;
unsigned int var_12 = 611886758U;
int zero = 0;
short var_13 = (short)31758;
int var_14 = -321997898;
long long int var_15 = 3516595410899236537LL;
unsigned int var_16 = 121445681U;
unsigned long long int var_17 = 2270454427551451918ULL;
unsigned int arr_3 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 487488628U;
}

void checksum() {
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
