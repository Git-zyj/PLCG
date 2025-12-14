#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)22;
short var_1 = (short)-26283;
short var_2 = (short)-10230;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)59927;
unsigned short var_14 = (unsigned short)56483;
unsigned int var_15 = 1175147113U;
signed char var_16 = (signed char)-86;
unsigned long long int var_17 = 6144598169640394214ULL;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 4004485019U;
signed char arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)-16;
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
