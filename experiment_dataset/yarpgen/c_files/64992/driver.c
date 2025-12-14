#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_14 = 4792187860846782017LL;
unsigned char var_17 = (unsigned char)64;
int zero = 0;
long long int var_18 = 4082120288788387701LL;
unsigned short var_19 = (unsigned short)18267;
short var_20 = (short)7988;
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
