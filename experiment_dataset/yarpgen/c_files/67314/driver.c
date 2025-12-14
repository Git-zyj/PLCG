#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17441;
int var_3 = -986589164;
int var_6 = -1991547546;
unsigned int var_11 = 3091823936U;
int var_14 = 1823994278;
int var_16 = -1196209049;
unsigned long long int var_17 = 6583205467684697216ULL;
long long int var_18 = 2517890686229248005LL;
int zero = 0;
int var_20 = -1287248065;
long long int var_21 = -1900752240676819012LL;
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
