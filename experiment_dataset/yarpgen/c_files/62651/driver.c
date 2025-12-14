#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)0;
signed char var_1 = (signed char)-24;
unsigned int var_2 = 3144253321U;
unsigned short var_6 = (unsigned short)24346;
unsigned int var_8 = 633416209U;
signed char var_10 = (signed char)67;
long long int var_12 = -7080939828457896535LL;
short var_13 = (short)3537;
unsigned char var_14 = (unsigned char)252;
long long int var_16 = 5260124575176606005LL;
signed char var_18 = (signed char)93;
int zero = 0;
short var_20 = (short)-24237;
unsigned short var_21 = (unsigned short)39754;
unsigned int var_22 = 2520644278U;
long long int var_23 = -1594652985301976691LL;
signed char var_24 = (signed char)40;
long long int var_25 = 3573386171542082516LL;
unsigned short arr_0 [12] ;
long long int arr_1 [12] [12] ;
_Bool arr_2 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)63389;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 4799954807899298066LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
