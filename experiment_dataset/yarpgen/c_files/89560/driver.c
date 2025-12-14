#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1165537628;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_13 = -1668679591;
unsigned int var_14 = 2609401381U;
unsigned int var_15 = 2843283289U;
long long int var_16 = 3216763838367095724LL;
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
