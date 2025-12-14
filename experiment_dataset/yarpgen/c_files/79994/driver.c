#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1157840429214542506ULL;
signed char var_1 = (signed char)74;
long long int var_18 = -4278462258048706603LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)74;
short var_22 = (short)9169;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
