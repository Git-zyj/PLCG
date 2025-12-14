#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 616657040616641406LL;
unsigned long long int var_3 = 10302399935457081692ULL;
int zero = 0;
unsigned int var_19 = 4246880089U;
unsigned int var_20 = 1039971808U;
unsigned long long int var_21 = 13406652247315248898ULL;
unsigned int var_22 = 3797831290U;
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
