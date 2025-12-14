#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)111;
unsigned int var_2 = 3820648601U;
signed char var_4 = (signed char)-98;
unsigned int var_8 = 1275937260U;
int zero = 0;
unsigned short var_17 = (unsigned short)3455;
unsigned short var_18 = (unsigned short)47178;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
