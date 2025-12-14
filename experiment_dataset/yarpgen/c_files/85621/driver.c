#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)6;
long long int var_8 = 4494936032167319937LL;
unsigned long long int var_14 = 15679139986554166440ULL;
int zero = 0;
unsigned long long int var_15 = 4977186201006962282ULL;
long long int var_16 = -4766781768332743911LL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
