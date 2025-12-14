#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3897326706U;
int var_3 = -2044573491;
unsigned char var_6 = (unsigned char)52;
short var_8 = (short)27894;
unsigned char var_10 = (unsigned char)36;
int var_11 = -1101852441;
unsigned long long int var_15 = 1355910382821918629ULL;
int zero = 0;
short var_16 = (short)608;
unsigned char var_17 = (unsigned char)58;
unsigned int var_18 = 2736100629U;
short var_19 = (short)32229;
int var_20 = -254550078;
long long int var_21 = -7860530928886120725LL;
signed char var_22 = (signed char)-89;
int arr_3 [23] [23] ;
int arr_4 [23] [23] ;
signed char arr_5 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 251186674;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 1502344196;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-85;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
