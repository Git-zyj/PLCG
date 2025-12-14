#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
short var_5 = (short)16988;
unsigned short var_6 = (unsigned short)16191;
short var_13 = (short)28312;
unsigned int var_15 = 770906464U;
_Bool var_17 = (_Bool)0;
short var_18 = (short)32289;
int zero = 0;
unsigned long long int var_19 = 752241501763044904ULL;
unsigned long long int var_20 = 3803559655596305481ULL;
long long int var_21 = 729792032116599498LL;
unsigned int var_22 = 3384850604U;
short var_23 = (short)591;
unsigned char var_24 = (unsigned char)250;
short var_25 = (short)16505;
unsigned long long int var_26 = 567664234111500531ULL;
unsigned int arr_6 [15] [15] [15] ;
unsigned int arr_7 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 660913508U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 3679380657U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
