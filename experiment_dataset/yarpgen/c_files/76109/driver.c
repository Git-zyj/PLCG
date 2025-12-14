#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)82;
int var_8 = 818932424;
_Bool var_10 = (_Bool)1;
short var_12 = (short)-25924;
signed char var_13 = (signed char)-122;
int zero = 0;
short var_15 = (short)-29220;
short var_16 = (short)-5800;
short var_17 = (short)-21443;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
