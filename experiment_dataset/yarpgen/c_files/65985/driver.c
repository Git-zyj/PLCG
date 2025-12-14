#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-103;
signed char var_3 = (signed char)-14;
signed char var_8 = (signed char)125;
signed char var_9 = (signed char)118;
signed char var_10 = (signed char)96;
signed char var_13 = (signed char)82;
int zero = 0;
signed char var_14 = (signed char)56;
signed char var_15 = (signed char)116;
signed char var_16 = (signed char)112;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
