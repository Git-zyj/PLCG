#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_5 = -4683612586948425809LL;
long long int var_9 = 1326189569270543157LL;
int var_13 = -1367570108;
int zero = 0;
short var_15 = (short)-3653;
int var_16 = 539626077;
void init() {
}

void checksum() {
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
