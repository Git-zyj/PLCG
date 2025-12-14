#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4634427344949494149LL;
long long int var_3 = -7552233547997056698LL;
long long int var_8 = 2794555953148953894LL;
signed char var_11 = (signed char)10;
int zero = 0;
unsigned long long int var_13 = 11350530882507039546ULL;
int var_14 = 1503603948;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
