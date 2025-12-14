#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 305988844U;
int var_6 = -2074132485;
unsigned char var_12 = (unsigned char)59;
unsigned int var_13 = 1573950666U;
unsigned long long int var_15 = 11973745990954355015ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = 450014045;
unsigned char var_19 = (unsigned char)112;
void init() {
}

void checksum() {
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
