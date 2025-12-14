#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -3758822395099128655LL;
signed char var_8 = (signed char)15;
long long int var_9 = -8135881741112945302LL;
int zero = 0;
unsigned char var_17 = (unsigned char)246;
unsigned int var_18 = 3069520949U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
