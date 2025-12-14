#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-99;
int var_2 = 2076397608;
long long int var_3 = -3224809147383154061LL;
short var_4 = (short)-22084;
unsigned int var_5 = 2071876160U;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)46;
int zero = 0;
unsigned short var_10 = (unsigned short)49608;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)68;
int var_13 = 689705454;
signed char var_14 = (signed char)-113;
_Bool arr_0 [17] ;
unsigned int arr_5 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 86967237U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
