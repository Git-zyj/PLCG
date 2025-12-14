#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6660403783866020807LL;
int var_6 = -1636961102;
int var_9 = -171886712;
unsigned short var_14 = (unsigned short)51235;
int zero = 0;
long long int var_19 = -2692767231790087737LL;
unsigned long long int var_20 = 14920444788764383902ULL;
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
