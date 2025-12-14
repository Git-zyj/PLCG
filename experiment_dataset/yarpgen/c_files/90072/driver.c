#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14669737032746590450ULL;
unsigned short var_2 = (unsigned short)47915;
unsigned long long int var_3 = 18167305219616162678ULL;
int zero = 0;
short var_10 = (short)-10029;
signed char var_11 = (signed char)52;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
