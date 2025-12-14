#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15264519830897665382ULL;
short var_2 = (short)10739;
int var_8 = 1883450368;
int zero = 0;
unsigned int var_10 = 689909801U;
unsigned char var_11 = (unsigned char)177;
unsigned char var_12 = (unsigned char)88;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
