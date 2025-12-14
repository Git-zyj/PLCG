#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1512619682;
signed char var_5 = (signed char)-103;
unsigned int var_7 = 1880103440U;
short var_12 = (short)-31772;
unsigned long long int var_13 = 5427239246888232058ULL;
int zero = 0;
short var_14 = (short)1623;
unsigned int var_15 = 3069134452U;
short var_16 = (short)23623;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
