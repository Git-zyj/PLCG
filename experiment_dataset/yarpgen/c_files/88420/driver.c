#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -9130768207616581309LL;
signed char var_4 = (signed char)-12;
unsigned int var_7 = 3161093862U;
int zero = 0;
unsigned int var_10 = 1623985696U;
long long int var_11 = 777097872859054109LL;
unsigned int var_12 = 3847854721U;
long long int var_13 = 4355155869119354764LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
