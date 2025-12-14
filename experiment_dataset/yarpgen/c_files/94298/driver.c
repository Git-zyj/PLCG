#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)16;
signed char var_11 = (signed char)50;
long long int var_13 = -272244636474193793LL;
int zero = 0;
unsigned long long int var_15 = 3295166500215075356ULL;
short var_16 = (short)28009;
unsigned long long int var_17 = 13987675819321725013ULL;
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
