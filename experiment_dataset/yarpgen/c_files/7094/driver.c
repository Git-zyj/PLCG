#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6276;
unsigned short var_10 = (unsigned short)64259;
signed char var_11 = (signed char)24;
unsigned char var_12 = (unsigned char)197;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_14 = 1522874348;
int var_15 = -1976004468;
int var_16 = -273062117;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
