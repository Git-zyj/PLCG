#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)158;
_Bool var_2 = (_Bool)1;
int var_3 = -746854158;
unsigned short var_6 = (unsigned short)18655;
int zero = 0;
unsigned long long int var_10 = 5463526050266670338ULL;
int var_11 = 1041578484;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
