#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-87;
long long int var_3 = -3108306249978472685LL;
unsigned int var_7 = 1581020594U;
long long int var_13 = 4555519854504354057LL;
long long int var_14 = -6906522819868092242LL;
int zero = 0;
short var_15 = (short)-31601;
unsigned char var_16 = (unsigned char)79;
unsigned int var_17 = 731499559U;
unsigned int var_18 = 3239303084U;
_Bool var_19 = (_Bool)0;
signed char arr_1 [17] ;
_Bool arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
