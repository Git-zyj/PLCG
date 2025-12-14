#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7821100806327193546ULL;
short var_3 = (short)20246;
signed char var_6 = (signed char)-18;
short var_7 = (short)-14218;
int zero = 0;
unsigned short var_14 = (unsigned short)14103;
signed char var_15 = (signed char)-102;
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
