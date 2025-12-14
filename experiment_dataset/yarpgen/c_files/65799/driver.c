#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7119517650772667923LL;
signed char var_2 = (signed char)127;
signed char var_5 = (signed char)10;
unsigned short var_6 = (unsigned short)31660;
signed char var_8 = (signed char)13;
unsigned long long int var_9 = 8648955562105542666ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)169;
unsigned short var_14 = (unsigned short)11842;
unsigned short var_15 = (unsigned short)12827;
signed char var_16 = (signed char)85;
unsigned short arr_1 [20] ;
unsigned short arr_8 [20] ;
unsigned short arr_10 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)35277;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (unsigned short)52437;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)65258;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
