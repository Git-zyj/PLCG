#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3002858895U;
int var_15 = -729916682;
long long int var_16 = 8041126154996778490LL;
int zero = 0;
unsigned long long int var_18 = 1913281676366020160ULL;
short var_19 = (short)1854;
unsigned char var_20 = (unsigned char)45;
void init() {
}

void checksum() {
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
