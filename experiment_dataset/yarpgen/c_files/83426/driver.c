#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4114865014U;
_Bool var_2 = (_Bool)0;
unsigned int var_5 = 3832935146U;
unsigned int var_8 = 2860037354U;
unsigned int var_10 = 3626436977U;
long long int var_11 = -6546921111721758445LL;
int zero = 0;
unsigned long long int var_17 = 2318805751776463012ULL;
unsigned char var_18 = (unsigned char)61;
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
