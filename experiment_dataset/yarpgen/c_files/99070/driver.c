#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1659791698U;
unsigned int var_9 = 1267553659U;
unsigned int var_11 = 1335995814U;
int zero = 0;
unsigned int var_16 = 2320216793U;
long long int var_17 = 1102806703290124723LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
