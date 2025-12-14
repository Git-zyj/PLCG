#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)91;
unsigned int var_2 = 2578908837U;
unsigned short var_3 = (unsigned short)44731;
short var_4 = (short)-24261;
long long int var_5 = 561582032053662008LL;
unsigned char var_7 = (unsigned char)219;
unsigned char var_8 = (unsigned char)204;
short var_10 = (short)11715;
unsigned long long int var_11 = 14760978525563748059ULL;
short var_13 = (short)-7114;
int zero = 0;
short var_14 = (short)17856;
long long int var_15 = -8989490751792536532LL;
int var_16 = -1095128390;
_Bool var_17 = (_Bool)1;
short var_18 = (short)3689;
int var_19 = 127604583;
unsigned char var_20 = (unsigned char)157;
long long int var_21 = 4409971010393187775LL;
unsigned short arr_0 [10] ;
unsigned char arr_1 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)30156;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)164;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
