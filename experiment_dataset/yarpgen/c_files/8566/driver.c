#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)4;
signed char var_14 = (signed char)-41;
int zero = 0;
unsigned long long int var_15 = 4614589326368875871ULL;
long long int var_16 = -6441277230676649916LL;
unsigned short var_17 = (unsigned short)43702;
long long int var_18 = -2651213786363895896LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
