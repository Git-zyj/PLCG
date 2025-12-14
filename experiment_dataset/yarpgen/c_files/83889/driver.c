#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_4 = -8388067050191976623LL;
unsigned long long int var_8 = 1077555549139726075ULL;
int zero = 0;
unsigned long long int var_13 = 3312808060843803160ULL;
unsigned long long int var_14 = 8335141043860578599ULL;
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
