#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1327683906;
int var_1 = 571323205;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)91;
unsigned long long int var_8 = 1036249908584351989ULL;
int var_9 = 631926098;
unsigned char var_11 = (unsigned char)152;
int zero = 0;
unsigned long long int var_12 = 8852001259644397953ULL;
int var_13 = 428783216;
unsigned long long int var_14 = 1686922577501512617ULL;
unsigned int var_15 = 994330214U;
signed char arr_0 [17] [17] ;
_Bool arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-23;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
