#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)47;
signed char var_3 = (signed char)-33;
signed char var_5 = (signed char)6;
_Bool var_6 = (_Bool)1;
int var_7 = 295240079;
unsigned int var_9 = 4117739653U;
int zero = 0;
int var_10 = 340266706;
signed char var_11 = (signed char)-39;
_Bool var_12 = (_Bool)1;
long long int var_13 = -4336413266322267951LL;
signed char arr_2 [15] [15] ;
unsigned char arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-60;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned char)248;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
