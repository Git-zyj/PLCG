#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_12 = (short)17983;
unsigned long long int var_15 = 4942841906577231412ULL;
int zero = 0;
long long int var_18 = 4672068946562121489LL;
unsigned long long int var_19 = 10741334450033986540ULL;
unsigned long long int var_20 = 846550251213497067ULL;
long long int var_21 = -3847369912117019808LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
