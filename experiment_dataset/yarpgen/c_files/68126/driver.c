#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_4 = -1000055270;
_Bool var_5 = (_Bool)1;
unsigned long long int var_9 = 4826916653227228710ULL;
int zero = 0;
unsigned long long int var_10 = 15409831476682660706ULL;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)64;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
