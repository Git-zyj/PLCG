#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10648;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)46687;
_Bool var_7 = (_Bool)0;
int var_9 = 1840232807;
unsigned short var_10 = (unsigned short)15529;
signed char var_11 = (signed char)-13;
int zero = 0;
signed char var_13 = (signed char)99;
long long int var_14 = 6009433333564276994LL;
signed char var_15 = (signed char)-82;
unsigned int var_16 = 4257376499U;
unsigned long long int var_17 = 14176243132524527634ULL;
signed char var_18 = (signed char)-101;
int var_19 = 402082955;
long long int arr_0 [21] ;
_Bool arr_10 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 7373518898432408957LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
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
