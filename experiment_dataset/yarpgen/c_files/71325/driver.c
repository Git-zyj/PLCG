#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54847;
signed char var_4 = (signed char)-2;
unsigned long long int var_5 = 6289644213673448824ULL;
signed char var_6 = (signed char)-47;
unsigned int var_9 = 2768888242U;
unsigned int var_12 = 1899716797U;
int zero = 0;
unsigned char var_15 = (unsigned char)41;
unsigned int var_16 = 1415386657U;
unsigned long long int var_17 = 17149417884212731354ULL;
signed char var_18 = (signed char)126;
unsigned long long int var_19 = 14682391519995697732ULL;
signed char arr_1 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-56;
}

void checksum() {
    hash(&seed, var_15);
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
