#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3847212252U;
_Bool var_4 = (_Bool)0;
short var_6 = (short)-26192;
unsigned short var_7 = (unsigned short)14563;
int var_10 = 244811549;
unsigned char var_14 = (unsigned char)196;
int zero = 0;
unsigned int var_15 = 3220117690U;
unsigned int var_16 = 2597782889U;
unsigned int var_17 = 3115077975U;
_Bool var_18 = (_Bool)0;
long long int arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? -873924347819650110LL : -4890289895397335175LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
