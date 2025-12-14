#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8597089802683388454ULL;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)199;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)102;
int zero = 0;
int var_15 = 2119199950;
unsigned long long int var_16 = 10530488048244078880ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
