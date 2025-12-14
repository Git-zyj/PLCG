#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-102;
signed char var_5 = (signed char)66;
int var_15 = -557336352;
long long int var_16 = -3761897891331722451LL;
short var_18 = (short)32410;
int zero = 0;
unsigned long long int var_19 = 10372880463383337855ULL;
signed char var_20 = (signed char)-125;
void init() {
}

void checksum() {
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
