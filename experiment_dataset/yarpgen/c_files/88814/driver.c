#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -205948930;
unsigned int var_10 = 2632950032U;
short var_12 = (short)21276;
long long int var_16 = 3190919800239394465LL;
unsigned int var_17 = 3941057537U;
int zero = 0;
unsigned char var_19 = (unsigned char)215;
int var_20 = -1948338138;
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
