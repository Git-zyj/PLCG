#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-31;
signed char var_5 = (signed char)110;
signed char var_10 = (signed char)-109;
short var_13 = (short)10671;
int zero = 0;
unsigned short var_16 = (unsigned short)42847;
unsigned short var_17 = (unsigned short)62094;
long long int var_18 = 6249609049211968001LL;
unsigned long long int var_19 = 15975502705517575549ULL;
unsigned short arr_0 [12] [12] ;
unsigned int arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)54704;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 1468382161U;
}

void checksum() {
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
