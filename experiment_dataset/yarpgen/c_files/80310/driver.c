#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3336988200525255297LL;
long long int var_2 = -3038273662786201569LL;
unsigned char var_3 = (unsigned char)14;
signed char var_4 = (signed char)-121;
unsigned int var_5 = 3959188325U;
signed char var_6 = (signed char)-40;
signed char var_7 = (signed char)79;
long long int var_8 = -5853955856705262409LL;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 3567894244U;
int var_11 = -307962817;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 14015527410404589053ULL;
int zero = 0;
long long int var_15 = 1308478547205640350LL;
signed char var_16 = (signed char)87;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 13040773482809800223ULL;
unsigned int var_19 = 1285224485U;
unsigned char var_20 = (unsigned char)128;
unsigned int var_21 = 728617470U;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)47;
unsigned long long int arr_5 [19] [19] [19] ;
_Bool arr_15 [19] [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 16834316322948117996ULL : 5212607296282152299ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
