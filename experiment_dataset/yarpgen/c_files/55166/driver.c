#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 637517059U;
_Bool var_1 = (_Bool)1;
unsigned short var_9 = (unsigned short)21223;
int zero = 0;
unsigned int var_10 = 3018094801U;
unsigned int var_11 = 1713771905U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
