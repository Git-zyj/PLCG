#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)102;
long long int var_3 = -6886474940866437109LL;
unsigned char var_9 = (unsigned char)142;
short var_13 = (short)25266;
int zero = 0;
long long int var_15 = -6145919687012369394LL;
long long int var_16 = -3718576192344669797LL;
unsigned int var_17 = 1340173885U;
unsigned long long int var_18 = 52368718982479954ULL;
int arr_1 [19] ;
signed char arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -727589674 : -755661964;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)92;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
