#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -234070611386976726LL;
unsigned short var_4 = (unsigned short)5379;
unsigned short var_6 = (unsigned short)34161;
int var_9 = 740420109;
unsigned short var_10 = (unsigned short)885;
signed char var_13 = (signed char)110;
unsigned short var_15 = (unsigned short)37171;
unsigned char var_18 = (unsigned char)73;
int zero = 0;
unsigned short var_20 = (unsigned short)6566;
signed char var_21 = (signed char)47;
int var_22 = 1892655242;
int var_23 = -170748161;
signed char var_24 = (signed char)-2;
signed char arr_1 [12] [12] ;
signed char arr_2 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-72;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
