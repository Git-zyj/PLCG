#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2920411248U;
long long int var_1 = 6079991131484852913LL;
unsigned short var_2 = (unsigned short)11675;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)40109;
int var_5 = -1239108876;
int var_7 = 1498447897;
int var_8 = 2145736502;
int var_9 = -1858892625;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)32539;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)19725;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
signed char arr_0 [18] [18] ;
_Bool arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
