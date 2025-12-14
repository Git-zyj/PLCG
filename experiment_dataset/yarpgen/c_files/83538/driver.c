#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3275412345U;
long long int var_12 = -273660197317667181LL;
unsigned long long int var_16 = 12694841836456599883ULL;
int zero = 0;
signed char var_17 = (signed char)-23;
short var_18 = (short)20325;
long long int var_19 = -7185148032891309419LL;
unsigned int var_20 = 1306346955U;
void init() {
}

void checksum() {
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
