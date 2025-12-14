#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12909647159411855930ULL;
unsigned char var_4 = (unsigned char)126;
int var_12 = -353695920;
int zero = 0;
signed char var_13 = (signed char)125;
long long int var_14 = -8278014925389301202LL;
unsigned char var_15 = (unsigned char)27;
int var_16 = 2038332981;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
