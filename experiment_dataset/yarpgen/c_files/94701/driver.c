#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17586345725894424814ULL;
unsigned long long int var_5 = 15046156453360127762ULL;
unsigned long long int var_8 = 12406755310370085607ULL;
short var_10 = (short)2997;
int zero = 0;
short var_13 = (short)32114;
unsigned long long int var_14 = 13285281608985689282ULL;
short var_15 = (short)13595;
short var_16 = (short)-28067;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
