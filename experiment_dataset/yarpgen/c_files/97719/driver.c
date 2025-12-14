#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7691249430271619862LL;
unsigned char var_2 = (unsigned char)241;
long long int var_6 = 8270706179911628061LL;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)63;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_15 = 988332040581397769LL;
_Bool var_16 = (_Bool)1;
long long int var_17 = 5621339022742626513LL;
void init() {
}

void checksum() {
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
