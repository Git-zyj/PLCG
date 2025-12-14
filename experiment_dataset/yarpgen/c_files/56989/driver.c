#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 104381222;
unsigned long long int var_1 = 8822218998920454098ULL;
short var_7 = (short)-23253;
long long int var_8 = 1244786991950772099LL;
unsigned char var_11 = (unsigned char)28;
int zero = 0;
unsigned short var_13 = (unsigned short)9348;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
