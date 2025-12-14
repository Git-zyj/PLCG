#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -140560052;
unsigned int var_6 = 1242376266U;
long long int var_12 = -697855813123403253LL;
int zero = 0;
long long int var_20 = 2407157561520946800LL;
long long int var_21 = 3542777573796975315LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
