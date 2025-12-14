#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-101;
signed char var_3 = (signed char)17;
signed char var_8 = (signed char)-80;
signed char var_12 = (signed char)-77;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_14 = (short)-18486;
short var_15 = (short)-4194;
unsigned long long int var_16 = 5815976588601676380ULL;
unsigned int var_17 = 1902066934U;
unsigned int arr_0 [19] ;
signed char arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 564223811U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-94;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
