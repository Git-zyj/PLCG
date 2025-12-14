#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-10569;
int var_7 = 1284257869;
signed char var_13 = (signed char)88;
unsigned short var_14 = (unsigned short)962;
int zero = 0;
unsigned long long int var_20 = 17356779412619277667ULL;
unsigned int var_21 = 4025304139U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
