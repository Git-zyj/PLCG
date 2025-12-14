#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 700913452U;
long long int var_4 = -7549407399710984450LL;
long long int var_5 = 1470926392675790725LL;
short var_7 = (short)18208;
unsigned char var_10 = (unsigned char)64;
int zero = 0;
long long int var_11 = 4459442035775919480LL;
unsigned char var_12 = (unsigned char)251;
short var_13 = (short)-6081;
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
