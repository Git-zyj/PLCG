#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2360462675U;
unsigned char var_8 = (unsigned char)27;
short var_11 = (short)-2338;
int zero = 0;
unsigned long long int var_13 = 14372618136739206957ULL;
short var_14 = (short)23206;
short var_15 = (short)25213;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
