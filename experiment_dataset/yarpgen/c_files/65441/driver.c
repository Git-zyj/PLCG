#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)5;
signed char var_9 = (signed char)-114;
unsigned long long int var_14 = 14353520152045455361ULL;
short var_17 = (short)20838;
int zero = 0;
long long int var_19 = 2662202592499052294LL;
signed char var_20 = (signed char)120;
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
