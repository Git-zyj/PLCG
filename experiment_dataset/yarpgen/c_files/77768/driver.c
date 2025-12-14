#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2660488946U;
unsigned long long int var_6 = 3706913221374241927ULL;
short var_7 = (short)-8484;
unsigned char var_8 = (unsigned char)107;
signed char var_9 = (signed char)92;
unsigned short var_11 = (unsigned short)45146;
unsigned long long int var_14 = 4816949382668110135ULL;
long long int var_15 = -6469985985288366071LL;
unsigned short var_18 = (unsigned short)9514;
short var_19 = (short)24634;
int zero = 0;
short var_20 = (short)-8167;
int var_21 = 1501853184;
signed char var_22 = (signed char)75;
unsigned long long int var_23 = 3538886326520578179ULL;
unsigned long long int var_24 = 10042130384289457031ULL;
signed char var_25 = (signed char)0;
unsigned int arr_0 [21] [21] ;
unsigned long long int arr_1 [21] [21] ;
int arr_3 [21] [21] ;
unsigned short arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 598542044U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 14304854838300385583ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 304626747;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)25258;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
