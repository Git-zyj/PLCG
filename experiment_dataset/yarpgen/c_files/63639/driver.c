#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 866049543;
signed char var_3 = (signed char)-125;
_Bool var_7 = (_Bool)1;
int var_11 = 1325641783;
int zero = 0;
signed char var_16 = (signed char)22;
short var_17 = (short)-15041;
void init() {
}

void checksum() {
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
