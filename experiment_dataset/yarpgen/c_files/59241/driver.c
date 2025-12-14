#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2457808403U;
long long int var_2 = 7960745808678102713LL;
short var_3 = (short)-26797;
unsigned short var_6 = (unsigned short)12734;
long long int var_7 = 6576828742950842545LL;
short var_9 = (short)22442;
short var_11 = (short)30940;
short var_12 = (short)12513;
unsigned long long int var_13 = 9404079480487619462ULL;
int zero = 0;
short var_14 = (short)31605;
signed char var_15 = (signed char)87;
int var_16 = 933859599;
unsigned short var_17 = (unsigned short)45975;
unsigned long long int var_18 = 10015095106485054476ULL;
unsigned char var_19 = (unsigned char)174;
unsigned int arr_1 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 2340636769U;
}

void checksum() {
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
