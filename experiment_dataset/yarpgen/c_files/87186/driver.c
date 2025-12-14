#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)34955;
unsigned int var_15 = 945164417U;
unsigned short var_16 = (unsigned short)20266;
int zero = 0;
unsigned long long int var_18 = 1362891323685899648ULL;
unsigned long long int var_19 = 15109229467327291814ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
