#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8502577606098565037LL;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 3685417041U;
int var_13 = 620221541;
long long int var_14 = 7100280798547099766LL;
unsigned long long int var_15 = 774907133427115916ULL;
unsigned short var_16 = (unsigned short)4491;
unsigned short var_17 = (unsigned short)730;
int var_18 = -804996152;
unsigned short var_19 = (unsigned short)5308;
long long int arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -4168629058719067617LL;
}

void checksum() {
    hash(&seed, var_12);
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
