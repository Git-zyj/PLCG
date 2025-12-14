#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)104;
long long int var_8 = 1047563577494230653LL;
int var_15 = -397668621;
int var_17 = 1285381219;
int zero = 0;
long long int var_20 = 6108011775034084241LL;
unsigned long long int var_21 = 15788148802505579892ULL;
long long int var_22 = -2063112098087964052LL;
signed char var_23 = (signed char)43;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
