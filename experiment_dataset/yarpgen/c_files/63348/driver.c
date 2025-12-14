#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1405548462;
signed char var_5 = (signed char)-70;
unsigned int var_8 = 3452771685U;
int zero = 0;
signed char var_12 = (signed char)82;
unsigned short var_13 = (unsigned short)31797;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
