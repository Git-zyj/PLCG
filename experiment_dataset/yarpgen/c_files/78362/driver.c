#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-127;
int var_4 = -1606461830;
signed char var_6 = (signed char)64;
_Bool var_8 = (_Bool)0;
long long int var_9 = 7233494860449407699LL;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 248848838U;
unsigned char var_12 = (unsigned char)231;
unsigned long long int var_14 = 13649908262790763113ULL;
unsigned short var_15 = (unsigned short)16727;
short var_17 = (short)-32131;
signed char var_18 = (signed char)31;
int zero = 0;
unsigned short var_19 = (unsigned short)27337;
int var_20 = -916100675;
short var_21 = (short)31285;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 7237560675314709745ULL;
unsigned long long int var_24 = 9633907547368639626ULL;
int var_25 = 204841908;
signed char arr_2 [20] ;
short arr_3 [20] [20] ;
signed char arr_4 [20] ;
unsigned int arr_6 [20] [20] [20] ;
unsigned int arr_7 [20] [20] ;
unsigned short arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (short)13712;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 2218046526U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = 3095338072U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned short)369;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
