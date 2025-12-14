#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)137;
unsigned int var_2 = 2203623166U;
long long int var_3 = 8976160667898716036LL;
unsigned char var_4 = (unsigned char)29;
short var_5 = (short)14902;
unsigned char var_10 = (unsigned char)176;
long long int var_11 = 3657066341683022267LL;
unsigned short var_12 = (unsigned short)40085;
int zero = 0;
int var_13 = 922888200;
unsigned long long int var_14 = 1819325259845375774ULL;
unsigned char var_15 = (unsigned char)175;
unsigned char var_16 = (unsigned char)200;
int var_17 = -98915429;
_Bool var_18 = (_Bool)1;
long long int var_19 = 642831818725781782LL;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 2951957791729223250ULL;
int var_22 = -1671832714;
long long int arr_22 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 4044678988741963553LL : 5163878053224621675LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
