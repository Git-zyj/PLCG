#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)9789;
short var_4 = (short)-1111;
long long int var_6 = -1308240620668196866LL;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 8161259953230969869ULL;
unsigned long long int var_11 = 3493324790086900581ULL;
unsigned int var_12 = 932456442U;
long long int arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -599581737129728496LL : 2679243189778970027LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
