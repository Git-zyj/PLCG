#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-38;
unsigned char var_10 = (unsigned char)93;
unsigned int var_13 = 270350537U;
signed char var_15 = (signed char)104;
int zero = 0;
int var_18 = -657163623;
short var_19 = (short)-24590;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
