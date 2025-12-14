#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16497372652716311352ULL;
int var_1 = 905426558;
_Bool var_6 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 428670850U;
long long int var_14 = 8737625056147626491LL;
signed char var_15 = (signed char)-11;
signed char var_16 = (signed char)-123;
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
