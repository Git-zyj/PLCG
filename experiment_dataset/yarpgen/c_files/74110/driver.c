#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)151;
short var_7 = (short)-996;
unsigned char var_13 = (unsigned char)149;
int zero = 0;
long long int var_14 = -2245644272407561840LL;
long long int var_15 = 4487946164367686610LL;
signed char var_16 = (signed char)-92;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
