#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31608;
unsigned long long int var_2 = 12119315447111417026ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 1943891524532506643ULL;
int var_22 = -1009548640;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
