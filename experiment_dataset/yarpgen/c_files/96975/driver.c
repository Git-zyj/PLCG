#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2039742710U;
_Bool var_2 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 7660339775910009068ULL;
unsigned long long int var_19 = 17582686637647471942ULL;
int var_20 = 226314187;
void init() {
}

void checksum() {
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
