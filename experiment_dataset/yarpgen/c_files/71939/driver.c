#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-55;
signed char var_4 = (signed char)50;
int var_5 = -1371227583;
short var_9 = (short)16412;
unsigned long long int var_15 = 2122239377323262380ULL;
int zero = 0;
int var_17 = 592107382;
unsigned long long int var_18 = 6069849054365389139ULL;
short var_19 = (short)1436;
unsigned int var_20 = 99634373U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
