#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -127094408;
long long int var_1 = -2093052186109461504LL;
short var_2 = (short)-29209;
signed char var_3 = (signed char)20;
long long int var_4 = 7626623615157710840LL;
unsigned char var_5 = (unsigned char)47;
unsigned char var_6 = (unsigned char)89;
unsigned int var_8 = 2749551173U;
long long int var_9 = 2227577982454630276LL;
unsigned int var_10 = 1501481485U;
long long int var_12 = 7796699508415676495LL;
unsigned int var_13 = 4139634735U;
unsigned short var_14 = (unsigned short)553;
int zero = 0;
unsigned short var_16 = (unsigned short)7240;
unsigned char var_17 = (unsigned char)79;
_Bool arr_3 [13] ;
unsigned short arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)6927;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
