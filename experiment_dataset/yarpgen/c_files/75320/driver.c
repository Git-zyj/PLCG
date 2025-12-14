#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 336374560781323946ULL;
unsigned long long int var_8 = 12120492047026058952ULL;
int zero = 0;
unsigned long long int var_16 = 1501338785746599986ULL;
signed char var_17 = (signed char)59;
_Bool var_18 = (_Bool)0;
int var_19 = 400174031;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
