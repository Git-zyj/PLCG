#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)43246;
long long int var_8 = 2468001678342474050LL;
unsigned int var_12 = 2740341821U;
unsigned char var_13 = (unsigned char)228;
int zero = 0;
int var_15 = -1030465068;
unsigned int var_16 = 732635403U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
