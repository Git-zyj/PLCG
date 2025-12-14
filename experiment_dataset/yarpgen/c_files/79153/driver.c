#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)62558;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)51;
int zero = 0;
unsigned long long int var_10 = 10221782745509675782ULL;
short var_11 = (short)-18149;
unsigned int var_12 = 2858744135U;
unsigned int var_13 = 1347916045U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
