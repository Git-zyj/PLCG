#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -509781268;
int var_4 = 1036485420;
long long int var_6 = 2515775806862365179LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_14 = 3832700517392831966ULL;
int zero = 0;
signed char var_20 = (signed char)-40;
long long int var_21 = 6108102804236822996LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
