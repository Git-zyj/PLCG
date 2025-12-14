#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)126;
short var_3 = (short)-9344;
unsigned int var_7 = 589331913U;
unsigned long long int var_8 = 525205997496256273ULL;
unsigned int var_11 = 3418358174U;
unsigned long long int var_13 = 16672378002717519560ULL;
int zero = 0;
unsigned int var_14 = 1113762483U;
signed char var_15 = (signed char)104;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
