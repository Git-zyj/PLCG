#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1242003498;
unsigned long long int var_9 = 18400405013176734066ULL;
unsigned short var_14 = (unsigned short)51736;
int zero = 0;
long long int var_18 = -3104056089709903581LL;
unsigned int var_19 = 1870410387U;
int var_20 = -1074317704;
_Bool var_21 = (_Bool)0;
long long int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -6350135771885150439LL;
}

void checksum() {
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
