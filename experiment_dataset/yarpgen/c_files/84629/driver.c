#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1392688539U;
short var_10 = (short)4156;
int zero = 0;
unsigned long long int var_16 = 3640164636322960027ULL;
unsigned int var_17 = 928095672U;
signed char var_18 = (signed char)122;
short var_19 = (short)-9398;
unsigned int var_20 = 1231819657U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
