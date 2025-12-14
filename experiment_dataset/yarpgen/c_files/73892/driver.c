#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3961350811317961873LL;
unsigned char var_2 = (unsigned char)163;
unsigned short var_4 = (unsigned short)15822;
unsigned long long int var_6 = 6907093164718531717ULL;
unsigned char var_7 = (unsigned char)186;
unsigned int var_10 = 2092504994U;
signed char var_14 = (signed char)-71;
int zero = 0;
signed char var_16 = (signed char)-97;
unsigned int var_17 = 3166161016U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
