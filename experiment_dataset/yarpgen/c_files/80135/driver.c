#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)123;
signed char var_3 = (signed char)96;
long long int var_5 = 6734238940719030623LL;
short var_6 = (short)-20416;
unsigned short var_8 = (unsigned short)10125;
short var_9 = (short)-20605;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_11 = -924705957;
signed char var_12 = (signed char)-69;
_Bool var_13 = (_Bool)0;
long long int var_14 = -7668073526543023115LL;
unsigned long long int var_15 = 579914087217758806ULL;
long long int var_16 = -292081238338932345LL;
long long int var_17 = 5740007551167023932LL;
short arr_1 [11] [11] ;
signed char arr_2 [11] ;
short arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (short)11714;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)10745 : (short)-15058;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
