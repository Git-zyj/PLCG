#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 3806745103610918240LL;
signed char var_12 = (signed char)-58;
unsigned long long int var_19 = 2919808845513516555ULL;
int zero = 0;
long long int var_20 = 2911935317635129958LL;
unsigned int var_21 = 3710533231U;
unsigned long long int var_22 = 10599890312305237371ULL;
void init() {
}

void checksum() {
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
