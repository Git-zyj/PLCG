#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2010706806;
unsigned long long int var_5 = 12175848450609350692ULL;
short var_6 = (short)-30511;
unsigned short var_8 = (unsigned short)27374;
int zero = 0;
signed char var_12 = (signed char)14;
unsigned int var_13 = 1292425482U;
signed char var_14 = (signed char)61;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
