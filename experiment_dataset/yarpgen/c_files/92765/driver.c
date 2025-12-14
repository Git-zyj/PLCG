#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8026665124322917020ULL;
unsigned long long int var_6 = 1506189717269345410ULL;
unsigned long long int var_12 = 16965030527529052245ULL;
int zero = 0;
unsigned long long int var_16 = 6569814841130947485ULL;
unsigned long long int var_17 = 11272394353516826668ULL;
short var_18 = (short)-8978;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
