#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10789116255622114622ULL;
unsigned char var_6 = (unsigned char)16;
unsigned long long int var_8 = 14409950358659575868ULL;
unsigned int var_10 = 2021424654U;
unsigned short var_11 = (unsigned short)406;
_Bool var_15 = (_Bool)1;
unsigned int var_17 = 4181637181U;
int zero = 0;
unsigned int var_19 = 1908481383U;
signed char var_20 = (signed char)-125;
unsigned int var_21 = 1237355523U;
unsigned int var_22 = 2465419367U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
