#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)3;
int var_4 = 641921194;
unsigned long long int var_5 = 8600614165265363106ULL;
unsigned long long int var_6 = 13766850289775350162ULL;
unsigned int var_8 = 1583418530U;
int zero = 0;
unsigned long long int var_12 = 8878317616876273871ULL;
signed char var_13 = (signed char)95;
unsigned char var_14 = (unsigned char)240;
unsigned long long int var_15 = 14846042169341148697ULL;
void init() {
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
