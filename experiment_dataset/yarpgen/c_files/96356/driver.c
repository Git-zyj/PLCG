#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12753004249425618170ULL;
unsigned short var_5 = (unsigned short)35788;
unsigned long long int var_14 = 15423072195986406519ULL;
int zero = 0;
short var_20 = (short)15771;
int var_21 = 214348565;
unsigned short var_22 = (unsigned short)51814;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
