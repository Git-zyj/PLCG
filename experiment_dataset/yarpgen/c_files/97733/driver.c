#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-125;
unsigned int var_6 = 511718211U;
unsigned char var_8 = (unsigned char)205;
long long int var_14 = 7335846118185288097LL;
int zero = 0;
signed char var_16 = (signed char)29;
long long int var_17 = 6795826842198229212LL;
long long int var_18 = -1058986582357647368LL;
signed char var_19 = (signed char)0;
unsigned long long int var_20 = 4541011459143413745ULL;
signed char arr_3 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)89 : (signed char)-66;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
