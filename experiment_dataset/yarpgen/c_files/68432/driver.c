#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = -7835368562152967763LL;
long long int var_14 = -5568240324200158088LL;
int zero = 0;
int var_16 = -33930153;
signed char var_17 = (signed char)-65;
unsigned int var_18 = 2304516612U;
int var_19 = 653285709;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
