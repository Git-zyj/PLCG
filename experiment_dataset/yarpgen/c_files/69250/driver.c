#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)58;
int var_6 = 2021461697;
unsigned short var_7 = (unsigned short)63317;
short var_8 = (short)-19464;
short var_9 = (short)31139;
int zero = 0;
unsigned int var_11 = 1600000557U;
int var_12 = 503340337;
long long int var_13 = 5833421769002464940LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
