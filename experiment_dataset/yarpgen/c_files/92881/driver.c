#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)16259;
unsigned int var_6 = 737021323U;
unsigned int var_12 = 824590000U;
int zero = 0;
long long int var_20 = 3857500328747352681LL;
int var_21 = -534893250;
unsigned char var_22 = (unsigned char)171;
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
