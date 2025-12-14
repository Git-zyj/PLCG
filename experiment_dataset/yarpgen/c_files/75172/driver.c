#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-29;
signed char var_11 = (signed char)-107;
signed char var_13 = (signed char)-70;
int zero = 0;
signed char var_14 = (signed char)-15;
signed char var_15 = (signed char)103;
unsigned short var_16 = (unsigned short)35370;
unsigned short var_17 = (unsigned short)49705;
void init() {
}

void checksum() {
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
