#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2637769638U;
int var_1 = 1092831992;
unsigned int var_3 = 920758142U;
long long int var_6 = -7741250782793265095LL;
unsigned long long int var_7 = 9110847913604562560ULL;
int var_9 = 830569288;
short var_10 = (short)19101;
unsigned short var_11 = (unsigned short)40069;
int zero = 0;
short var_14 = (short)20591;
unsigned char var_15 = (unsigned char)158;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)60;
short var_18 = (short)-3687;
unsigned short arr_5 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)49241 : (unsigned short)41906;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
