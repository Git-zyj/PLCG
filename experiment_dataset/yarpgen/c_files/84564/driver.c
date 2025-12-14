#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -2133072692;
unsigned char var_11 = (unsigned char)117;
_Bool var_14 = (_Bool)1;
unsigned long long int var_16 = 12848888511495926401ULL;
int zero = 0;
signed char var_19 = (signed char)68;
int var_20 = 1748677203;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
