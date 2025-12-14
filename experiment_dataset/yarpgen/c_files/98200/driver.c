#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)4380;
unsigned char var_6 = (unsigned char)204;
long long int var_9 = -5662049190037609280LL;
unsigned long long int var_14 = 2241574527364949147ULL;
int zero = 0;
signed char var_15 = (signed char)51;
unsigned long long int var_16 = 18335648409990036325ULL;
short var_17 = (short)18840;
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
