#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3199224572285350649ULL;
long long int var_3 = 3838268672603417130LL;
int var_4 = 759095580;
int var_8 = -388266299;
unsigned int var_9 = 1908612654U;
int zero = 0;
int var_10 = -2140975833;
short var_11 = (short)32654;
unsigned short var_12 = (unsigned short)5316;
int var_13 = 1200677200;
long long int arr_5 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -6360545311449058996LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
