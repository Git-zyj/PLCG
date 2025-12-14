#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-77;
unsigned char var_10 = (unsigned char)84;
int zero = 0;
long long int var_11 = 5373155593559593800LL;
int var_12 = 61570668;
unsigned int var_13 = 872366898U;
unsigned short var_14 = (unsigned short)52580;
unsigned long long int var_15 = 2618380478153679744ULL;
unsigned long long int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 5507739217905218666ULL;
}

void checksum() {
    hash(&seed, var_11);
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
