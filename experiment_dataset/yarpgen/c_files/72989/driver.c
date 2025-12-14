#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)22;
long long int var_7 = -8750528978028570050LL;
unsigned long long int var_12 = 9487256267490847612ULL;
unsigned long long int var_14 = 3918815433705647223ULL;
int zero = 0;
signed char var_15 = (signed char)2;
int var_16 = 1705240087;
long long int var_17 = 2067147218310626832LL;
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
