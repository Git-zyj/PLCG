#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1722612218;
signed char var_3 = (signed char)14;
unsigned char var_5 = (unsigned char)197;
unsigned long long int var_7 = 12658054416578269351ULL;
long long int var_9 = -2313523311364153782LL;
int zero = 0;
unsigned int var_11 = 2277802431U;
short var_12 = (short)14766;
short var_13 = (short)-10893;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
