#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-101;
signed char var_4 = (signed char)-40;
unsigned char var_7 = (unsigned char)118;
long long int var_10 = -716785856833777091LL;
int zero = 0;
int var_14 = -1058470434;
long long int var_15 = -1134702150079457015LL;
unsigned int var_16 = 1683703101U;
void init() {
}

void checksum() {
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
