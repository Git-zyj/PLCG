#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)15;
unsigned char var_5 = (unsigned char)19;
int zero = 0;
long long int var_11 = -5646987196285900454LL;
long long int var_12 = 4014214942614475883LL;
unsigned long long int var_13 = 18035350497922000032ULL;
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
