#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3402766345208571724LL;
_Bool var_5 = (_Bool)0;
unsigned int var_11 = 993942253U;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-19777;
void init() {
}

void checksum() {
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
