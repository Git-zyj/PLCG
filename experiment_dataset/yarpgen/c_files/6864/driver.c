#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)115;
short var_8 = (short)-13933;
_Bool var_11 = (_Bool)1;
long long int var_13 = -1374763453956638053LL;
int zero = 0;
signed char var_15 = (signed char)-68;
short var_16 = (short)-10753;
void init() {
}

void checksum() {
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
