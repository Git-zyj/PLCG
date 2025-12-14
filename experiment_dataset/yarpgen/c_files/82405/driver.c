#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1971926505913861082LL;
signed char var_6 = (signed char)105;
signed char var_7 = (signed char)119;
unsigned char var_10 = (unsigned char)87;
int zero = 0;
signed char var_18 = (signed char)-93;
unsigned char var_19 = (unsigned char)36;
int var_20 = -1995574795;
signed char var_21 = (signed char)65;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-72;
signed char arr_3 [19] [19] ;
signed char arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)96;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
