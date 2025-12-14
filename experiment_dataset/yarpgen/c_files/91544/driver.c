#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2431834992998401692ULL;
long long int var_6 = 6757888750653091705LL;
short var_10 = (short)8833;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)7291;
unsigned long long int var_18 = 9176003809138088805ULL;
unsigned long long int var_19 = 6584717614987123840ULL;
unsigned char var_20 = (unsigned char)112;
unsigned long long int var_21 = 13752191363387889059ULL;
_Bool arr_4 [24] ;
unsigned short arr_5 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)11675;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
