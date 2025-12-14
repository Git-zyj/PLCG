#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)63;
unsigned char var_3 = (unsigned char)149;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-31;
unsigned long long int var_14 = 14041981394365428508ULL;
unsigned int var_15 = 1024168770U;
void init() {
}

void checksum() {
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
