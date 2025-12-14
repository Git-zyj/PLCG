#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)135;
unsigned long long int var_4 = 9745417107282012619ULL;
unsigned int var_9 = 1825932579U;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 262491798U;
void init() {
}

void checksum() {
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
