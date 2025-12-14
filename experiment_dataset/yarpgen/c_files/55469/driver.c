#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)33;
unsigned long long int var_3 = 15888726561889519699ULL;
unsigned long long int var_4 = 4830741943299995844ULL;
signed char var_5 = (signed char)70;
unsigned int var_7 = 2225091560U;
unsigned short var_12 = (unsigned short)40970;
unsigned long long int var_14 = 2696519324648536719ULL;
int zero = 0;
short var_15 = (short)8222;
unsigned short var_16 = (unsigned short)57444;
long long int var_17 = 8448754592171529442LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
