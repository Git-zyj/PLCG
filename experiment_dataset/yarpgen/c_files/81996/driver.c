#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 3737334066U;
unsigned long long int var_5 = 15944799691492542746ULL;
short var_6 = (short)20303;
signed char var_8 = (signed char)-109;
unsigned char var_12 = (unsigned char)150;
int var_16 = -862013029;
unsigned int var_17 = 4257190773U;
unsigned int var_18 = 3848193156U;
int zero = 0;
short var_20 = (short)17069;
unsigned char var_21 = (unsigned char)238;
unsigned short var_22 = (unsigned short)62594;
int var_23 = -631578708;
short var_24 = (short)27581;
int var_25 = -330361249;
signed char arr_5 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)113;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
