#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5546390203631303024ULL;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)9;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)-72;
int zero = 0;
unsigned int var_12 = 3407479114U;
_Bool var_13 = (_Bool)1;
long long int var_14 = -2472927591038994980LL;
short var_15 = (short)22257;
_Bool var_16 = (_Bool)1;
_Bool arr_0 [25] [25] ;
_Bool arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
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
