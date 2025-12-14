#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18521;
short var_3 = (short)-12357;
signed char var_6 = (signed char)49;
_Bool var_11 = (_Bool)0;
short var_13 = (short)23892;
short var_15 = (short)2468;
short var_16 = (short)7884;
int zero = 0;
short var_17 = (short)31003;
_Bool var_18 = (_Bool)1;
short var_19 = (short)9149;
int var_20 = -1465878465;
unsigned short var_21 = (unsigned short)17815;
unsigned int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 2290209401U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
