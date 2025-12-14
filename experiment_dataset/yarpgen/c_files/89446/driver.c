#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)63604;
long long int var_3 = 7541938553245518947LL;
signed char var_8 = (signed char)32;
int zero = 0;
unsigned char var_10 = (unsigned char)162;
unsigned int var_11 = 1567579101U;
long long int var_12 = 7432919793960068117LL;
short var_13 = (short)-23350;
signed char var_14 = (signed char)105;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
