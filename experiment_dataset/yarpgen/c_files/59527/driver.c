#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1433598815U;
unsigned long long int var_7 = 10402546706744859825ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 13089133317684959892ULL;
int var_20 = -832835875;
void init() {
}

void checksum() {
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
