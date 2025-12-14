#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
unsigned int var_8 = 988355569U;
long long int var_10 = -2167713683630823477LL;
long long int var_15 = 7201262952144331792LL;
int zero = 0;
short var_16 = (short)21203;
long long int var_17 = 5230386625299508277LL;
unsigned int var_18 = 3158589682U;
long long int var_19 = -3378870101294674399LL;
_Bool var_20 = (_Bool)0;
int arr_1 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 1967506567;
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
