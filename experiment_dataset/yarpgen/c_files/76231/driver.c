#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4943948530101968697LL;
unsigned short var_1 = (unsigned short)25002;
unsigned long long int var_4 = 17960897933658716473ULL;
unsigned int var_7 = 3360600922U;
unsigned short var_8 = (unsigned short)42566;
unsigned short var_10 = (unsigned short)24780;
int zero = 0;
unsigned char var_11 = (unsigned char)11;
unsigned long long int var_12 = 17426976657893095795ULL;
signed char var_13 = (signed char)109;
int var_14 = 1390824226;
unsigned short arr_2 [19] ;
unsigned char arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)45090;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)198;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
