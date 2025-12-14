#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)1;
short var_3 = (short)661;
unsigned long long int var_6 = 10321724346868753356ULL;
_Bool var_7 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-93;
short var_14 = (short)2841;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
