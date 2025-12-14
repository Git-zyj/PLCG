#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)26;
unsigned int var_1 = 1282183254U;
unsigned short var_2 = (unsigned short)5851;
signed char var_6 = (signed char)-45;
short var_7 = (short)11943;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 15972822359319686607ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)57347;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)(-127 - 1);
short var_14 = (short)12142;
unsigned long long int arr_1 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 15796136553746384514ULL;
}

void checksum() {
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
