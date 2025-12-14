#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)25;
short var_7 = (short)24836;
signed char var_12 = (signed char)40;
int zero = 0;
long long int var_17 = -5394195208730610332LL;
signed char var_18 = (signed char)-16;
unsigned char var_19 = (unsigned char)182;
unsigned int var_20 = 2676673024U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
