#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 322107108U;
unsigned int var_2 = 3191447158U;
unsigned long long int var_8 = 10212902531475061452ULL;
signed char var_15 = (signed char)23;
int zero = 0;
int var_18 = -919573693;
long long int var_19 = 5575968451745659280LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
