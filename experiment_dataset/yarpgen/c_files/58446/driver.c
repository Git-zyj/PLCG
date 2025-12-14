#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7067202407399698753LL;
long long int var_6 = 7031921818663530802LL;
int zero = 0;
unsigned int var_18 = 1447233810U;
int var_19 = -1651343837;
unsigned char var_20 = (unsigned char)156;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
