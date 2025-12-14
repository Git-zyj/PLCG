#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6361;
short var_3 = (short)30878;
signed char var_4 = (signed char)-13;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
int zero = 0;
int var_12 = -1602427190;
long long int var_13 = 4608981592883812535LL;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)61134;
int var_16 = 837138553;
_Bool arr_2 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
