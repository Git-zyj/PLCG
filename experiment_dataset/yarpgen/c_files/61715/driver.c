#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)64;
unsigned long long int var_1 = 322608982349936249ULL;
_Bool var_2 = (_Bool)0;
int var_3 = -391932234;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-29034;
int var_8 = -1028381941;
long long int var_10 = 4265805790159831701LL;
unsigned int var_13 = 738691718U;
_Bool var_19 = (_Bool)1;
int zero = 0;
long long int var_20 = 1856213007795485626LL;
signed char var_21 = (signed char)38;
unsigned int var_22 = 2919336918U;
unsigned short var_23 = (unsigned short)34726;
unsigned long long int var_24 = 867124262227844908ULL;
unsigned char arr_0 [13] [13] ;
_Bool arr_1 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
