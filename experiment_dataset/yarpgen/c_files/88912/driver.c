#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10798;
long long int var_1 = -1640252102581592283LL;
unsigned char var_2 = (unsigned char)53;
unsigned int var_5 = 363191879U;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned short var_12 = (unsigned short)25299;
unsigned long long int var_14 = 16977783390065770275ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2938332609U;
unsigned char var_18 = (unsigned char)170;
int var_19 = -811157640;
short var_20 = (short)-7875;
unsigned long long int var_21 = 7298390971035819500ULL;
short arr_0 [21] [21] ;
signed char arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-22945;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (signed char)-77;
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
