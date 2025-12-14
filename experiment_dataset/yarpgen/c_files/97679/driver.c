#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 211161044;
signed char var_8 = (signed char)-36;
unsigned long long int var_10 = 7701255514179438673ULL;
long long int var_11 = 8833966115979663541LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned char arr_0 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)212;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
