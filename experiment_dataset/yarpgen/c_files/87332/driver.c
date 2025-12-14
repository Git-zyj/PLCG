#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8364;
unsigned short var_15 = (unsigned short)5854;
long long int var_18 = 8708395078409111031LL;
int zero = 0;
short var_20 = (short)19703;
unsigned int var_21 = 2184228559U;
signed char var_22 = (signed char)107;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
