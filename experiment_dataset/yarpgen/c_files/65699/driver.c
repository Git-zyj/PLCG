#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)244;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 4116416789U;
signed char var_10 = (signed char)-3;
unsigned char var_11 = (unsigned char)131;
unsigned long long int var_12 = 3384638164996197995ULL;
int zero = 0;
unsigned int var_13 = 842497770U;
unsigned char var_14 = (unsigned char)55;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)35;
signed char var_17 = (signed char)105;
signed char var_18 = (signed char)-62;
long long int var_19 = -7687212393646947302LL;
_Bool arr_2 [17] ;
_Bool arr_6 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
