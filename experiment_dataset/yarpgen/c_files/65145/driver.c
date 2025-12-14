#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2993914710703255923LL;
long long int var_8 = -7772428104849101609LL;
long long int var_10 = 833773669282901074LL;
unsigned int var_11 = 1830575485U;
int zero = 0;
unsigned char var_14 = (unsigned char)69;
short var_15 = (short)-12169;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
