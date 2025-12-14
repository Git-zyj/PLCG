#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 737770736U;
unsigned int var_7 = 937500721U;
short var_9 = (short)-16006;
short var_10 = (short)4419;
short var_12 = (short)18110;
short var_13 = (short)-25636;
unsigned int var_15 = 4176245813U;
int zero = 0;
long long int var_17 = -6317215424850276975LL;
short var_18 = (short)9444;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
