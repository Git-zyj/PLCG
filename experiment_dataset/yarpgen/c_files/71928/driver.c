#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1234410510U;
unsigned char var_2 = (unsigned char)167;
unsigned int var_3 = 3136547894U;
unsigned char var_5 = (unsigned char)4;
unsigned int var_6 = 4166541183U;
int zero = 0;
unsigned char var_10 = (unsigned char)238;
unsigned char var_11 = (unsigned char)25;
unsigned int var_12 = 2941479250U;
int var_13 = 1971280439;
unsigned long long int var_14 = 15650461299001504954ULL;
int var_15 = 1967242259;
unsigned char arr_1 [16] [16] ;
unsigned char arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)85 : (unsigned char)57;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
