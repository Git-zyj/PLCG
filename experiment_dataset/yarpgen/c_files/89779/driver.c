#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)54;
signed char var_4 = (signed char)-31;
unsigned char var_6 = (unsigned char)4;
long long int var_9 = 8472334907683502936LL;
unsigned char var_11 = (unsigned char)185;
int zero = 0;
signed char var_16 = (signed char)117;
int var_17 = -725048659;
void init() {
}

void checksum() {
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
