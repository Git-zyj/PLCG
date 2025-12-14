#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18136365794941112970ULL;
short var_3 = (short)30190;
unsigned char var_7 = (unsigned char)156;
int var_9 = 1507610756;
int var_13 = -1324543985;
unsigned char var_14 = (unsigned char)25;
int zero = 0;
unsigned int var_17 = 3940813845U;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-123;
_Bool arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
