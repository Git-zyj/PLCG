#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16356848342573449249ULL;
long long int var_5 = -9082200977706891342LL;
long long int var_7 = 8333735386023971426LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 6395366933157882413LL;
void init() {
}

void checksum() {
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
