#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5571604154736853689LL;
short var_6 = (short)-28229;
int zero = 0;
unsigned short var_13 = (unsigned short)44356;
short var_14 = (short)17987;
unsigned long long int var_15 = 7867108684770380192ULL;
short var_16 = (short)-6797;
unsigned char var_17 = (unsigned char)161;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
