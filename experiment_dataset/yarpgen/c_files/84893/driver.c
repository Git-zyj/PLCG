#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)18;
signed char var_3 = (signed char)113;
signed char var_4 = (signed char)111;
signed char var_8 = (signed char)76;
long long int var_9 = 2843887241966526740LL;
int var_10 = -1262368268;
short var_12 = (short)16989;
unsigned int var_13 = 2264550284U;
unsigned int var_14 = 3111798365U;
unsigned int var_16 = 3163929267U;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_18 = -673521251;
unsigned short var_19 = (unsigned short)17838;
short var_20 = (short)-21613;
signed char var_21 = (signed char)-82;
_Bool var_22 = (_Bool)1;
signed char arr_0 [18] [18] ;
signed char arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)84;
}

void checksum() {
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
