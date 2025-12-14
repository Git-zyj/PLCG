#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 108920492536417452ULL;
unsigned char var_3 = (unsigned char)169;
unsigned long long int var_5 = 4904364902508285831ULL;
unsigned short var_11 = (unsigned short)61450;
unsigned long long int var_14 = 8508848977255062342ULL;
short var_16 = (short)2024;
int zero = 0;
signed char var_20 = (signed char)76;
long long int var_21 = -8857405531339984832LL;
unsigned short var_22 = (unsigned short)51400;
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
