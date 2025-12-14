#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)111;
unsigned char var_11 = (unsigned char)41;
int var_12 = -1350733447;
signed char var_17 = (signed char)23;
int zero = 0;
long long int var_19 = 3059452482812495898LL;
int var_20 = 1567735730;
void init() {
}

void checksum() {
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
