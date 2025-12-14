#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31082;
unsigned int var_2 = 4251416985U;
unsigned long long int var_6 = 8540932660052545624ULL;
unsigned short var_7 = (unsigned short)30310;
int var_8 = -1906375101;
int zero = 0;
unsigned long long int var_13 = 1602936641102614021ULL;
long long int var_14 = 4873291384784214503LL;
short var_15 = (short)16052;
unsigned int var_16 = 64827700U;
unsigned long long int arr_1 [14] ;
int arr_5 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 7693523014050570281ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1774966005;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
