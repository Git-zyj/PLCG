#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 261012011U;
unsigned int var_2 = 3813239350U;
unsigned int var_4 = 3688369120U;
unsigned char var_10 = (unsigned char)63;
int zero = 0;
short var_11 = (short)-15031;
unsigned long long int var_12 = 11247087562621026521ULL;
void init() {
}

void checksum() {
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
