#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9326192144668402912ULL;
unsigned short var_5 = (unsigned short)11249;
unsigned int var_7 = 94478635U;
short var_9 = (short)-26969;
int zero = 0;
short var_14 = (short)19770;
short var_15 = (short)-24321;
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
